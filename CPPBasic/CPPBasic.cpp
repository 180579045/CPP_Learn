// CPPBasic.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	// ����������һ����ʼ����һ��û�г�ʼ��
	int i2;
	int init1 = 11;

	//int i = 1, &r = 0;                     //��������r����ʹ�ó���
	int &PTr2 = i2;                          //��ȷ����ͨ������ֻ�����ñ���
	int *const p2 = &i2;                     //��ȷ��һ��constָ���������ʽ
	const int i = -1, &r2 = 0;               //��ȷ����ͨconst�����ͳ��������ÿ���ʹ�ó���
	const int *const p3 = &i2;               //��ȷ��������const�ĳ���ָ��
	const int *p4 = &init1;                  //��ȷ�����������ĳ���ָ��
	const int &r3 = i2;                      //��ȷ��һ��const����
	const int i3 = i2, &r4 = i;				 //���󣬳���i3ʹ�ñ�����ʼ��������û�����⣬�����Ӧ�ı���û�б���ʼ������������쳣

	std::cout << "const���ÿ������ó���(��ͨ����ֻ�����ñ���)" << r2 << "\n" << std::endl;
	std::cout << "const����,���õ�û�г�ʼ���ı�����" << r3 << "\n" << std::endl;
	std::cout << "constָ��ָ����һ��û�г�ʼ���ı�����" << *p3 << "\n" << std::endl;

	PTr2 = 222;
	std::cout << "const����,����û��ʼ���ı�������ֵ��" << r3 << "\n" << std::endl;
	std::cout << "constָ��ָ����һ������ʼ���ı�����" << *p4 << "\n" << std::endl;
	std::cout << "constָ���ڴ��ַָ���û�г�ʼ����ֵ����ֵ�ˣ�" << *p3 << "\n" << std::endl;

	init1 = 12;
	std::cout << "constָ���ڴ��ַָ��ĳ�ʼ����ֵ���ı��ˣ�" << *p4 << "\n" << std::endl;

	std::cout << "��ͨconst�����ڸ�ֵ��ʱ�򱻸�ֵ��һ��û�г�ʼ���ı���" << i3 << "\n" << std::endl;
	std::cout << "�Ǹ�������θı䣬��const����Ҳ����䣬�Ǹ�������ֵ�ǣ�" << i2 << "\n" << std::endl;

	std::system("pause");

    return 0;
}

