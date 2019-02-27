#include "stdafx.h"
#include <iostream>
#include <vector>
#include <map>

using namespace std;

// ʹ��auto�ؼ���ֱ���ж���Ⱥź�߱��ʽ������;
// ����1�����������߳��Ĵ����д;
void autoUsing_JudgeType()
{
	std::map<int, std::map<int, int>> map1;
	std::map<int, int> map1Value;

	map1Value.insert(std::make_pair(1, 1));
	map1.insert(std::make_pair(1, map1Value));
	map1.insert(std::make_pair(2, map1Value));

	// ʹ�õ���������map1�ķ���Ϊ��
	std::map<int, std::map<int, int>>::iterator iter = map1.begin();
	for (; iter != map1.end(); ++iter)
	{
		std::cout << "����д������;" << iter->first << std::endl;
	}

	// ʹ��auto�ؼ����ñ�����ֱ���жϱ��ʽ�ķ�������;
	auto iter2 = map1.begin();
	for (; iter2 != map1.end(); ++iter2)
	{
		std::cout << "auto��������;" << iter2->first << std::endl;
	}

	return;
}

// ʹ��ģ�弼��ʱ�����ĳ������������������ģ�����;
// ��ʹ��auto������ȷ�����������ͣ�ʹ��auto�󣬽��ɱ������Զ�����ȷ����
template <class T, class U>
void UseAutoMultiply(T t, U u)
{
	auto v = t * u;
}

template <typename T1, typename T2>
auto compose(T1 t1, T2 t2) -> decltype(t1 + t2)
{
	return t1 + t2;
}
auto v = compose(2, 3.14); // v's type is double;