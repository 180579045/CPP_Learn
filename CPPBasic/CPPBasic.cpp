// CPPBasic.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int errcode = 10;
	int *const CPerr = &errcode;

	std::cout << "Cperr is" << *CPerr << std::endl;

	errcode = 20;
	std::cout << "Cperr2 is" << *CPerr << std::endl;


	int i2;
	//int i = 1, &r = 0;           //��������r����ʹ�ó���
	int *const p2 = &i2;           //��ȷ
	const int i = -1, &r2 = 0;     //��ȷ
	const int *const p3 = &i2;     //��ȷ

	const unsigned int i3 = i2, &r3 = i;     //���󣬳���i3���ܸı�ֵ

	std::cout << "Cperr2 is" << *p3 << std::endl;
	i2 = 123;
	std::cout << "Cperr2 is" << *p3 << std::endl;


	std::cout << "i3 is" << i3 << std::endl;

	//i2++;

	std::cout << "i3 is" << i3 << std::endl;
	std::system("pause");

    return 0;
}

