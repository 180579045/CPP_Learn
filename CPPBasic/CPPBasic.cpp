// CPPBasic.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "stdafx.h"
#include "CPPBasic.h"
#include <string>

int main()
{
	//                                                                     1��const�������;
	//--------------------------------------------------------------------------------------
	pointer1();
	ConstDefineInitPrint();
	ConstDefinePrint();
	//����ָ��;
	Printconst();
	//--------------------------------------------------------------------------------------


	//                                                                        2��auto�ؼ���;
	//--------------------------------------------------------------------------------------
	autoUsing_JudgeType();
	//--------------------------------------------------------------------------------------


	//                                                                          3���������;
	//--------------------------------------------------------------------------------------
	//����ֵΪ���õĺ���;
	std::string strA = "function";
	refStringA(strA) = "FunctioN";
	std::cout << "��������������strA;" << strA << std::endl;

	//�����ĵݹ����;
	int ret = factorial();
	//--------------------------------------------------------------------------------------
	


	//                                                                             4��ָ��;
	//--------------------------------------------------------------------------------------


	//--------------------------------------------------------------------------------------


	//                                                                          5����Ļ���;
	//--------------------------------------------------------------------------------------
	
	//struct:str_Sales_data
	Str_Sales_data strSalesData;
	Str_Sales_data ProductA;
	const Str_Sales_data con_strSalesData;  //con_strSalesData��һ���ײ�const,Ҳ�������ַ�ǳ���;

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
	//--------------------------------------------------------------------------------------




	//                                                                          ��Sales_data
	//--------------------------------------------------------------------------------------
	Sales_data ProductB;
	Sales_data ProductB2;
	Sales_data total;
	Sales_data *total2 = &total;
	Sales_data total3;
	dictionary dic1;

	total.NumOfSale = 100;
	total.price = 100.43;

	ProductB.NumOfSale = 200;
	ProductB.price = 99.57;
	ProductB.Book_Isbn = "ProductB1";

	ProductB2.NumOfSale = 900;
	ProductB2.price = 99.57;
	ProductB2.Book_Isbn = "ProductB2";

	total3 = (ProductB + ProductB2);
	std::cout << "After + and = is:" << total3.Book_Isbn << std::endl;
	std::cout << "After + and = is:" << total3.NumOfSale << std::endl;

	total = total.CombineTwo(ProductB);
	std::cout << "After combine is:" << total.NumOfSale << std::endl;

	total2 = total2->CombineTwo2(&ProductB);
	std::cout << "After combine is:" << total2->NumOfSale << std::endl;
	std::cout << "After combine is:" << total.NumOfSale << std::endl;

	// ���캯��A,���г�ʼ�������б�;
	std::string BookIsbn = "CppPrimer";
	Sales_data SdInit(BookIsbn, 55.9);
	std::cout << "���ù��캯����ʼ��,ͼ��ISBN;" << SdInit.GetIsbn() 
			  << ",ͼ��۸�;" << SdInit.price << std::endl;

	// ���캯��B������������ĺ���;
    // istream��ʵ������cin;
	Sales_data B(cin);
	std::cout << "���캯��������Read�������û������,\nISBN;" << B.GetIsbn() 
		      << "\nPrice;" << B.price << "\nNumofSales;" << B.NumOfSale << std::endl;

	std::cout << "ͼ��;" << B.GetIsbn() << "�������ܶ�Ϊ;" << B.GetTotalIncome() << std::endl;

	std::string nullbook = "99-99-99-99";

	// ����Ϊ������Σ����������Σ����Ի������������;
	SdInit.CombineTwo(nullbook);
	SdInit.CombineTwo(Sales_data(nullbook));
	
	{
		Sales_data copySD;
		read(cin, ProductB);
		copySD = ProductB;

		std::cout << "Copy by operator = ,copySD BookIsbn is" << copySD.Book_Isbn << std::endl;
	}

	dic1.GetTotalIncome();
	dic1.CombineTwo(nullbook);

	//----------------------------------------------------------------------------



	//                                                                    ��Screen
	//----------------------------------------------------------------------------
	
	Screen screen1(8, 4, 'a');
	char ret2 = screen1.get();
	screen1.move(0, 0).set('b').move(1,1).set('c').display();

	//----------------------------------------------------------------------------



	//                                                               ��Bank_Ancout
	//----------------------------------------------------------------------------

	Bank_Acount::SetRate(0.03);
	double rate = Bank_Acount::GetRate();
	std::cout << "Rate is:" << rate << std::endl;

	//----------------------------------------------------------------------------




	//                                                                   ��StrVec
	//----------------------------------------------------------------------------


	//                                                                    6���ݹ�
	//----------------------------------------------------------------------------
	int JiechengRet;
	JiechengRet = Jiecheng(10);
	//----------------------------------------------------------------------------

	std::system("pause");
	return 0;
}
