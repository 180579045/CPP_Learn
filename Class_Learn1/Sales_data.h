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
protected:
private:
};


/*
����C++��׼��˵���ṹ����֧�ֳ�Ա������;
*/
typedef struct Tag_Str_Sales_data
{
	// ������Ա;
	string GetIsbn()const    // ��ȡIsbn;
	{
		return Book_Isbn;
	}
	double Average_Price();  // ��ȡƽ���۸�;
	
	// ���ݳ�Ա;
	string Book_Isbn;        // ͼ����;
	unsigned int NumOfSale;  // ��������;
	double TotalIncome;      // �����ܶ�;

}Str_Sales_data, *pStr_Sales_data;

#endif