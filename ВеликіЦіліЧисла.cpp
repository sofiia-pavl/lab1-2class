#include "�����ֳ������.h"
#include <iostream>

void �����ֳ������::setA(long int value)
{
	a = value;
}

void �����ֳ������::setB(long int value)
{
	b = value;
}

bool �����ֳ������::Init(long int a, long int b)
{

	setA(a);
	setB(b);
	return true;
}

void �����ֳ������::Read()
{
	long int a;
	long int b;

	do {
		cout << "first num = "; cin >> a;
		cout << "second num = "; cin >> b;
	} while (!Init(a, b));
}
void �����ֳ������::Display()
{ 
	cout << "first num = " << a << endl;
	cout << "second num = " << b << endl;
}
void �����ֳ������::Comparison()
{
	if (a == b)  cout << a << " = " << b;  
	else if (a < b)   cout << a << " < " << b;  
	else if (a > b)   cout << a << " > " << b;
}