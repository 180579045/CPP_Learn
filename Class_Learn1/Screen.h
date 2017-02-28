#pragma once
#include "stdafx.h"
#include <string>

using namespace std;

class Screen
{
public:
	typedef std::string::size_type pos;
	Screen() = default;
	Screen(pos width, pos height, char c)
		: width(width), height(height), content(width * height, c) {}
	
	char get() const
	{
		return content[curcos];
	}
	inline char get(pos x, pos y) const;

	Screen& set(char c)
	{
		content[curcos] = c;
		return *this;
	}
	Screen& set(pos x, pos y, char c)
	{
		pos row = this->width * x;
		this->content[row + y] = c;
		return *this;
	}
	void voidset(char c)
	{
		content[curcos] = c;
	}

	Screen& move(pos x, pos y);

private:
	pos curcos = 0;        // ���λ��;
	pos height = 0;        // ��Ļ��;
	pos width = 0;         // ��Ļ��;
	std::string content;   // ��ʾ����;
};