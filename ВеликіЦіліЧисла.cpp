#include "ВеликіЦіліЧисла.h"
#include <iostream>

void ВеликіЦіліЧисла::setA(long int value)
{
	a = value;
}

void ВеликіЦіліЧисла::setB(long int value)
{
	b = value;
}

bool ВеликіЦіліЧисла::Init(long int a, long int b)
{

	setA(a);
	setB(b);
	return true;
}

void ВеликіЦіліЧисла::Read()
{
	long int a;
	long int b;

	do {
		cout << "first num = "; cin >> a;
		cout << "second num = "; cin >> b;
	} while (!Init(a, b));
}
void ВеликіЦіліЧисла::Display()
{ 
	cout << "first num = " << a << endl;
	cout << "second num = " << b << endl;
}
void ВеликіЦіліЧисла::Comparison()
{
	if (a == b)  cout << a << " = " << b;  
	else if (a < b)   cout << a << " < " << b;  
	else if (a > b)   cout << a << " > " << b;
}