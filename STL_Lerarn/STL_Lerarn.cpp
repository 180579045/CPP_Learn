// STL_Lerarn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>

#include "STL_Learn.h"
#include "Vector_etc.h"
#include "String_l.h"


using namespace std;

int main()
{

	//-----------------vector-----------------------
	//�����ַ������ѧϰ����vector;
	std::string inputstr = "123//324//345/56";
	std::string splitstr = "//";
	std::vector<std::string> res = SplitStr(inputstr, splitstr);
	for (int i = 0; i < (int)res.size(); ++i)
	{
		std::cout << "Split result is " << res[i].c_str() << endl;
	}

	strvec vec1;

	// vector��ʹ�õ��������е���;
	vec1.vectorinit();
	for (vector<std::string>::iterator iter = vec1.strvector.begin(); iter != vec1.strvector.end();++iter)
	{
		std::cout << "ʹ��iterator����;" << iter->c_str() << endl;
	}
	for (auto c : vec1.strvector)
	{
		std::cout << "�µĵ�������;" << c.c_str() << endl;
	}
	//-----------------vector-----------------------


	// ----------------string------------------
	// ʹ��string���ֵ������string���ݽ��бȽ�;
	Bookinfo BKList;
	auto Booklist = BKList.Strinit();
	if (Booklist[1] > Booklist[2])
	{
		std::cout << "11" << std::endl;
	}
	std::cout << "Input Something:";
	BKList.GetUserInput();
	//-----------------string------------------


	system("pause");
    return 0;
}

