// CPPBasic.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;

// ��������;
/* ����const.cpp�еĺ��� */
void pointer1();
void ConstDefineInitPrint();
void ConstDefinePrint();

/* ����auto.cpp�еĺ��� */
void autoUsing_JudgeType();

int main()
{
	//----const�������;start------
	pointer1();
	ConstDefineInitPrint();
	ConstDefinePrint();
	//----const�������;end ------

	//----auto�ؼ���;---------
	autoUsing_JudgeType();
	//----auto�ؼ���;---------

	std::system("pause");
	return 0;
}
