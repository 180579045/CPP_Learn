#include "stdafx.h"
#include <iostream>

using namespace std;

typedef unsigned int u32;
using s32 = int;

/*
* const�����ĸ��ֶ��塢��ʼ���汾;
* ��ͨconst����;
* const����;
* constָ��;
*/
void ConstDefineInitPrint()
{
	// ����������һ����ʼ����һ��û�г�ʼ��;
	int i2;
	int init1 = 11;

	//int i = 1, &r = 0;                     //��������r����ʹ�ó���
	int &PTr2 = i2;                          //��ȷ����ͨ������ֻ�����ñ���;
	int *const p2 = &i2;                     //��ȷ��һ��constָ���������ʽ;
	const int i = -1, &r2 = 0;               //��ȷ����ͨconst�����ͳ��������ÿ���ʹ�ó���;
	const int *const p3 = &i2;               //��ȷ��������const�ĳ���ָ��;
	const int *p4 = &init1;                  //����(���벻�����)������p4��˵����һ����ָͨ�룬������*p4��˵������һ������;
	const int &r3 = i2;                      //��ȷ��һ��const����;
	const int i3 = i2, &r4 = i;				 //���󣬳���i3ʹ�ñ�����ʼ��������û�����⣬�����Ӧ�ı���û�б���ʼ������������쳣

	std::cout << "const���ÿ������ó���(��ͨ����ֻ�����ñ���);" << r2 << "\n" << std::endl;
	std::cout << "const����,���õ�û�г�ʼ���ı���;" << r3 << "\n" << std::endl;
	std::cout << "constָ��ָ����һ��û�г�ʼ���ı���;" << *p3 << "\n" << std::endl;

	PTr2 = 222;
	std::cout << "const����,����û��ʼ���ı�������ֵ;" << r3 << "\n" << std::endl;
	std::cout << "constָ��ָ����һ������ʼ���ı���;" << *p4 << "\n" << std::endl;
	std::cout << "constָ���ڴ��ַָ���û�г�ʼ����ֵ����ֵ��;" << *p3 << "\n" << std::endl;

	//p3 = &init1;                           //���´���ı���,��Ϊָ��P3��һ������;

	init1 = 12;
	std::cout << "constָ���ڴ��ַָ��ĳ�ʼ����ֵ���ı���;" << *p4 << "\n" << std::endl;
	std::cout << "const *p4����������ָ�룬�Ƿ�ᱻ�ı��ŵ��ڴ��ַ,û�ı�֮ǰ���ڴ��ַ;" << p4 << "\n" << std::endl;
	p4 = &i2;
	std::cout << "const *p4����������ָ�룬�Ƿ�ᱻ�ı��ŵ��ڴ��ַ��" << p4 << "\n" << std::endl;

	std::cout << "��ͨconst�����ڸ�ֵ��ʱ�򱻸�ֵ��һ��û�г�ʼ���ı���;" << i3 << "\n" << std::endl;
	std::cout << "�Ǹ�������θı䣬��const����Ҳ����䣬�Ǹ�������ֵ��;" << i2 << "\n" << std::endl;

	return;
}

/*
const��������;
*/
void ConstDefinePrint()
{
	int i2 = 30;
	int i, const *cp;              //�Ϸ�(����֪���Ǹ�ʲô��)��cp����constָ�룬*cpҲ����һ��const���͡���;
	//int *p1,*const p2;           //����p1��intָ�룬��ȷ������p2��constָ�룬��Ҫ��ʼ��;
	//int *const cp2;              //����cp2��const*���͵ģ���const�����������ʼ��;
	//const int ic,&r = ic;        //����ic��const���ͣ���cosnt�����������ʼ��;��ߵ�r����û�����⣬����icû�г�ʼ��
	//const int *const p3;         //����p3��һ��const�����������ʼ��;
	const int *p;                  //�Ϸ�(������ͨ��),p��intָ�������const���ͣ�*p��const����
	//constexpr int i = i2;        //constexpr������������һ�����飬������ֵ������һ���������ʽ;

	i = 10;
	//cp������ʲô?;
	//cp��һ��ָ�����ͣ����ǲ�����constָ�볣��;
	cp = &i;
	std::cout << "cp value is:" << *cp << ",cp address is " << cp << "\n" << std::endl;
	cp = &i2;
	std::cout << "change cp pointer,cp value is" << *cp << ",cp address is " << cp << "\n" << std::endl;
	*cp = 10;
	std::cout << "cp value is" << *cp << "\n" << std::endl;

	return;
}

/*
��������Ƿ�Ϸ�������Ƿ����޸�֮;

int null = 0, *p = null;
����null��int���ͣ����ܰ󶨵�p���ָ������;

*/
void pointer1()
{
	//int null = 0, *p = null;
	s32 null = 0;
	s32 *p = &null;
	s32 *p2 = (int*)null;
	s32 *p3 = nullptr;

	std::cout << "p addr is " << p << std::endl;
	std::cout << "p2 addr is " << p2 << std::endl;
	std::cout << "p3 addr is " << p3 << std::endl;

	return;
}

void Printconst()
{
	const double pi = 3.14;
	const double pi2 = 3.1415;
	// ppi��һ��ָ��������ĳ���ָ��;
	const double* const ppi = &pi;

	// ppi3��һ������ָ��;
	const double* ppi3 = &pi;

	// Ҳ������ppi�ĵ�ַ������Ӧ��ֵ�����ܱ��ı�;
	//ppi = &pi2;      ppi��ָ�����ĳ���ָ��,ppi����һ���ɸ�ֵ����ֵ;
	//*ppi = 3.141;    ppi��ָ�����ĳ���ָ��,ppi����һ���ɸ�ֵ����ֵ;

	// ppi3�ĵ�ַ���Ըı�?????;
	ppi3 = &pi2;

	std::cout << *ppi3 << std::endl;

}