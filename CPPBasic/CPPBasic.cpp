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
	Str_Sales_data ProductA;
	const Str_Sales_data con_strSalesData;    //con_strSalesData��һ���ײ�const,Ҳ�������ַ�ǳ���;

	strSalesData.Book_Isbn = "00001";
	strSalesData.NumOfSale = 100;
	strSalesData.TotalIncome = 1000.4;

	// һ���ǳ������������const���εĳ�Ա����;
	std::string PrintBook = strSalesData.GetIsbn();
	// һ���������������const���εĳ�Ա����;
	std::string PrintBook2 = con_strSalesData.GetIsbn();

	// һ���ǳ��������������ͨ�ĳ�Ա����;
	strSalesData.Average_Price();

	// һ�����������������ͨ�ĳ�Ա�������������;
	//con_strSalesData.Average_Price();
	std::cout << "str_Sales_data's BookIsbn:" << PrintBook << std::endl;

	//-----------Sales_data----------------
	Sales_data ProductB;
	Sales_data total;
	Sales_data *total2 = &total;

	total.NumOfSale = 100;
	total.TotalIncome = 100.43;

	ProductB.NumOfSale = 200;
	ProductB.TotalIncome = 99.57;

	total = total.CombineTwo(ProductB);
	std::cout << "After combine is:" << total.NumOfSale << std::endl;

	total2 = total2->CombineTwo2(&ProductB);
	std::cout << "After combine is:" << total2->NumOfSale << std::endl;
	std::cout << "After combine is:" << total.NumOfSale << std::endl;

	// ���캯��A,���г�ʼ�������б�;
	std::string abc = "abc";
	Sales_data SdInit(abc, 11.1);
	std::cout << "���ù��캯����ʼ��;" << SdInit.GetIsbn() << "," << SdInit.TotalIncome << std::endl;

	// ���캯��B��������һ�����⺯��;
	string abc2;
	Sales_data SdInit2(cin>>abc2);
	std::cout << "����istream���������ʼ��;" << SdInit2.GetIsbn() << "," << SdInit2.TotalIncome << std::endl;

	// ����ĺ���;

	//-----------Sales_data----------------


	std::system("pause");
	return 0;
}
