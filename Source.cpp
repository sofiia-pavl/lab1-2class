#include <iostream>
#include "ВеликіЦіліЧисла.h"
#include <windows.h>

ВеликіЦіліЧисла makeВеликіЦіліЧисла(long int a, long int b)
{
	ВеликіЦіліЧисла c;
	if(!c.Init(a,b))
		cout << "wrong argument to Init (second)" << endl;
	return c;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	ВеликіЦіліЧисла v;
	v.Read();
	v.Display();
	cout<< "Ділення:"<<v.getDiv()<<endl;
	cout << "Множення:" << v.getMul()<<endl;
	cout << "Різниця:" << v.getSub() << endl;
	cout << "Сума:" << v.getSum() << endl;
    v.Comparison();

	long double x, y;
	cout << " first = "; cin >> x;
	cout << " second = "; cin >> y;
	ВеликіЦіліЧисла u = makeВеликіЦіліЧисла(x, y);
	cout << "Різниця:" << u.getSub() << endl;
	u.Comparison();
	return 0;
}
