#pragma once
#ifndef SALES_DATA_H
#define  SALES_DATA_H

#include <string>
#include "stdafx.h"

using namespace std;
using std::string;

class Sales_data
{
public:
protected:
private:
};

struct Str_Sales_data
{
	// ������Ա;
	string GetIsbn()         // ��ȡIsbn;
	{
		return Book_Isbn;
	}
	double Average_Price();  // ��ȡƽ���۸�;
	
	// ���ݳ�Ա;
	string Book_Isbn;        // ͼ����;
	unsigned int NumOfSale;  // ��������;
	double TotalIncome;      // �����ܶ�;

};

#endif