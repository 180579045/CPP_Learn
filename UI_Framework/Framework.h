#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // �� Windows ͷ���ų�����ʹ�õ�����;

class UICompenment
{
public:
	virtual void Add(UICompenment Children);
	virtual void Remove(UICompenment Children);
	virtual UICompenment GetChild(int Index);
protected:
private:
};

class Container : UICompenment
{
public:
	Container() = default;
	~Container();

private:

};

