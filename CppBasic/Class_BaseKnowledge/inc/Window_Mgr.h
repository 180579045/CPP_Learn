#pragma once
#ifndef WIN_MGR_H
#define WIN_MGR_H

#include <vector>
#include "Screen.h"
using namespace std;

class Window_Manager
{
	// ʵ��һ����screen��Ļ����ĺ���;
public:
	void Clear();
	~Window_Manager();
	Screen scr1;
private:
};

#endif // WIN_MGR_H!
