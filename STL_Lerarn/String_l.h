#pragma once
#include <string>
using namespace std;
using std::string;

class Bookinfo
{
public:
	string BookName;
	int ISBN;
	int Price;

	Bookinfo()
	{

	}

	Bookinfo(string BKName, int isbn, int price)
	{
		this->BookName = BKName;
		this->ISBN = isbn;
		this->Price = price;
	}
	
	vector<Bookinfo> Strinit();

	// ���ش���С�������;
	bool operator >(const Bookinfo Bi) const
	{
		return this->BookName > Bi.BookName;
	}

	bool operator <(const Bookinfo Bi) const
	{
		return this->BookName < Bi.BookName;
	}
};
