#include <type_traits>
#include <iostream>
#include <string>
#include <map>
using namespace std;
template <typename T>
class Optional
{
    using data_t = typename std::aligned_storage<sizeof(T), std::alignment_of<T>::value>::type;

public:
    Optional() : m_hasInit(false) {}
    Optional(const T &v)
    {
        Create(v);
    }

    Optional(T &&v) : m_hasInit(false)
    {
        Create(std::move(v));
    }

    ~Optional()
    {
        Destroy();
    }

    Optional(const Optional &other) : m_hasInit(false)
    {
        if (other.IsInit())
            Assign(other);
    }

    Optional(Optional &&other) : m_hasInit(false)
    {
        if (other.IsInit())
        {
            Assign(std::move(other));
            other.Destroy();
        }
    }

    Optional &operator=(Optional &&other)
    {
        Assign(std::move(other));
        return *this;
    }

    Optional &operator=(const Optional &other)
    {
        Assign(other);
        return *this;
    }

    template <class... Args>
    void emplace(Args &&... args)
    {
        Destroy();
        Create(std::forward<Args>(args)...);
    }

    bool IsInit() const { return m_hasInit; }

    explicit operator bool() const
    {
        return IsInit();
    }

    T &operator*()
    {
        if (IsInit())
        {
            return *((T *)(&m_data));
        }

        throw std::logic_error("is not init");
    }

    T const &operator*() const
    {
        if (IsInit())
        {
            return *((T *)(&m_data));
        }

        throw std::logic_error("is not init");
    }

    bool operator==(const Optional<T> &rhs) const
    {
        return (!bool(*this)) != (!rhs) ? false : (!bool(*this) ? true : (*(*this)) == (*rhs));
    }

    bool operator<(const Optional<T> &rhs) const
    {
        return !rhs ? false : (!bool(*this) ? true : (*(*this) < (*rhs)));
    }

    bool operator!=(const Optional<T> &rhs)
    {
        return !(*this == (rhs));
    }

private:
    template <class... Args>
    void Create(Args &&... args)
    {
        new (&m_data) T(std::forward<Args>

                        (args)...);
        m_hasInit = true;
    }

    void Destroy()
    {
        if (m_hasInit)
        {
            m_hasInit = false;
            ((T *)(&m_data))->~T();
        }
    }

    void Assign(const Optional &other)
    {
        if (other.IsInit())
        {
            Copy(other.m_data);
            m_hasInit = true;
        }
        else
        {
            Destroy();
        }
    }

    void Assign(Optional &&other)
    {
        if (other.IsInit())
        {
            Move(std::move(other.m_data));
            m_hasInit = true;
            other.Destroy();
        }
        else
        {
            Destroy();
        }
    }

    void Move(data_t &&val)
    {
        Destroy();
        new (&m_data) T(std::move(*((T *)

                                        (&val))));
    }

    void Copy(const data_t &val)
    {
        Destroy();
        new (&m_data) T(*((T *)(&val)));
    }

private:
    bool m_hasInit;
    data_t m_data;
};