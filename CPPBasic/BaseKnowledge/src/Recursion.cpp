#include "CPPBasic.h"
#include "stdafx.h"
#include <iostream>

using namespace std;

/*
*  �ݹ��ʹ��˵��
*/

int Jiecheng(const int n)
{
	if (0 >= n)
	{
		std::cout << "Wrong Parameter n Please Check!" << std::endl;
		return n;
	}
	else if (1 == n)
	{
		return 1;
	}
	else
	{
		// �ݹ�ı����ǽ������⣬����n!���Ϊn*!(n-1);
		return n * Jiecheng(n - 1);
	}
}