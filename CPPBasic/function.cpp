#include "stdafx.h"
#include <string>

using namespace std;
using std::string;

/*
�������ã�����ֵΪһ�����õĺ���;
*/
string &refStringA(string &str)
{
	return str;
}

/*
�������ã��ݹ麯��;
*/
int factorial(int val)
{
	if (val > 1)
	{
		return factorial(val - 1) * val;
	}
	// �����и���ֹ�ݹ���õ�����;
	return 1;
}