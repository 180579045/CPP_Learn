#pragma once
#ifndef SALES_DATA_H
#define  SALES_DATA_H

#include "stdafx.h"
#include <string>
#include <iostream>

using namespace std;
using std::string; using std::cout; using std::endl;

class Sales_data
{
public:
	// ���캯��;
	Sales_data() = default;

	// ���캯��,ð�ź���ǹ��캯����ʼֵ�б�;
	Sales_data(const std::string &str, const double &str2) 
		: Book_Isbn(str), TotalIncome(str2)
	{
	}
	Sales_data(std::istream &is);

	// ������Ա;
	string GetIsbn()const     // ��ȡIsbn;
	{
		return Book_Isbn;
	}
	double Average_Price2();  // ��ȡƽ���۸�;

	Sales_data& CombineTwo(const Sales_data &res);
	Sales_data* CombineTwo2(Sales_data *const res);

	// ���ݳ�Ա;
	string Book_Isbn;         // ͼ����;
	unsigned int NumOfSale;   // ��������;
	double TotalIncome;       // �����ܶ�;
protected:
private:
};


/*
����C++��׼��˵���ṹ����֧�ֳ�Ա�����ģ���������������붨���ڽṹ��;
*/
typedef struct Tag_Str_Sales_data
{
	// ������Ա;
	string GetIsbn()const    // ��ȡIsbn;
	{
		return Book_Isbn;
	}

	double Average_Price()
	{
		double ret = 20;
		std::cout << "str_Average_Price" << std::endl;
		return ret;
	}

	// ���ݳ�Ա;
	string Book_Isbn;        // ͼ����;
	unsigned int NumOfSale;  // ��������;
	double TotalIncome;      // �����ܶ�;

}Str_Sales_data, *pStr_Sales_data;


istream &read(istream &is, Sales_data &item);

#endif