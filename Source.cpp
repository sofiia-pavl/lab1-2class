#include <iostream>
#include "�����ֳ������.h"
#include <windows.h>

�����ֳ������ make�����ֳ������(long int a, long int b)
{
	�����ֳ������ c;
	if(!c.Init(a,b))
		cout << "wrong argument to Init (second)" << endl;
	return c;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	�����ֳ������ v;
	v.Read();
	v.Display();
	cout<< "ĳ�����:"<<v.getDiv()<<endl;
	cout << "��������:" << v.getMul()<<endl;
	cout << "г�����:" << v.getSub() << endl;
	cout << "����:" << v.getSum() << endl;
    v.Comparison();

	long double x, y;
	cout << " first = "; cin >> x;
	cout << " second = "; cin >> y;
	�����ֳ������ u = make�����ֳ������(x, y);
	cout << "г�����:" << u.getSub() << endl;
	u.Comparison();
	return 0;
}
