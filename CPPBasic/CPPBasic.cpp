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
void UseAutoMultiply(T t, U u);

int main()
{
	//----const�������;start------
	pointer1();
	ConstDefineInitPrint();
	ConstDefinePrint();
	//----const�������;end ------

	//----auto�ؼ���;---------
	autoUsing_JudgeType();
	UseAutoMultiply(3.14, 10);
	//----auto�ؼ���;---------

	std::system("pause");
	return 0;
}
