// CPPBasic.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

#include "Sales_data.h"

using namespace std;

// ��������;
/* ����const.cpp�еĺ��� */
void pointer1();
void ConstDefineInitPrint();
void ConstDefinePrint();

/* ����auto.cpp�еĺ��� */
void autoUsing_JudgeType();

/* ����function.cpp�еĺ��� */
string &refStringA(string&);
// ������һ��Ĭ�ϲ���;
int factorial(int val = 5);

void Printconst();


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

	//----����ֵΪ���õĺ���;---
	std::string strA = "function";
	refStringA(strA) = "FunctioN";
	std::cout << "��������������strA;" << strA << std::endl;
	//----����ֵΪ���õĺ���;---

	//---�����ĵݹ����;---
	int ret = factorial();
	//---�����ĵݹ����;---
	
	//----ָ��ָ���ָ��;------

	//----ָ��ָ���ָ��;------

	//----����ָ��;-------
	Printconst();
	//----����ָ��;-------

	//---------------���ѧϰ;-----------------
	//-----------str_Sales_data----------------
	Str_Sales_data strSalesData;
	const Str_Sales_data con_strSalesData;    //con_strSalesData��һ���ײ�const,Ҳ�������ַ�ǳ���;

	strSalesData.Book_Isbn = "00001";

	// һ���ǳ������������const���εĳ�Ա����;
	std::string PrintBook = strSalesData.GetIsbn();
	// һ���������������const���εĳ�Ա����;
	std::string PrintBook2 = con_strSalesData.GetIsbn();

	// һ���ǳ��������������ͨ�ĳ�Ա����;
	strSalesData.Average_Price();
	// һ�����������������ͨ�ĳ�Ա�������������;
	//con_strSalesData.Average_Price();
	std::cout << "str_Sales_data's BookIsbn:" << PrintBook << std::endl;

	//-----------str_Sales_data----------------


	//-----------str_Sales_data----------------


	std::system("pause");
	return 0;
}
