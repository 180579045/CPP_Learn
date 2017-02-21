#include "stdafx.h"
#include <iostream>
#include <vector>
#include <sstream>

#include "STL_Learn.h"
#include "Vector_etc.h"

using namespace std;

// ����ַ���;
vector<std::string> SplitStr(std::string inputstr, std::string splitstr)
{
	std::vector<std::string> res;
	inputstr += splitstr;
	if (splitstr.empty())
	{
		return res;
	}
	for (int i = 0; i <= (int)inputstr.size(); ++i)
	{
		int postion = inputstr.find(splitstr, i);
		if (postion < (int)inputstr.size())
		{
			std::string tempstr = inputstr.substr(i, postion - i);
			res.push_back(tempstr);
			i = postion + (splitstr.size() - 1);
		}

	}

	return res;
}

void int2str(const int &int_temp, string &string_temp)
{
	stringstream stream;
	stream << int_temp;
	string_temp = stream.str();
}

void strvec::vectorinit()
{
	for (int i = 0; i < 10; ++i)
	{
		string tempstr = "Strlist";
		string temp2;
		int2str(i, temp2);
		tempstr += temp2;

		strvector.push_back(tempstr);
	}

}

