// STL_Lerarn.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>
#include <algorithm>
#include <fstream>

#include "STL_Learn.h"
#include "Vector_etc.h"
#include "String_l.h"
#include "Sales_data.h"

using namespace std;
using std::string;

int main(int argc, char* args[])
{

	//-----------------vector-----------------------
	// �����ַ������ѧϰ����vector;
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

	// ͨ��Getline��ȡ�û�����
// 	std::cout << "Input Something:";
// 	BKList.GetUserInput();
	//-----------------string------------------

	//--------------IOStream-------------------

	// ��������ļ�,ʹ��ofstream;
	ofstream fout;
	fout.open("out.txt");

	// ��ofstream�Ĺ��캯������ֱ�Ӵ���open�����Ĳ���;
	// ���ģʽΪappģʽ(append)�Ļ�����open��ʱ��,�����������open���ļ�;
	std::ofstream out("..//data//1.txt", ofstream::app);
	std::ifstream in("..//data//Sales_data.txt");

	if (out.is_open())
	{
		std::cout << "open!" << std::endl;
		out << "print \n";
		out << "print3 \n";
		out.close();
	}
	else
	{
		std::cout << "not open!" << std::endl;
	}

	char buff[265];
	if (in.is_open())
	{
		while (!in.eof())
		{
			in.getline(buff, 100);
			cout << buff << std::endl;
		}
	}
	else
	{
		cout << "open failed!" << endl;
	}
	
	//--------------IOStream-------------------

	system("pause");
    return 0;
}


