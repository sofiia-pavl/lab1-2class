#pragma once
using namespace std;
class ВеликіЦіліЧисла
{
private:
	long int a;
	long int b;
public:
	long int getA() const { return a; }
	long int getB() const { return b; }

	void setA(long int);
	void setB(long int);

	long int getSum() const { return a + b; }
	long int getSub() const { return a - b; }
	long int getMul() const { return a * b; }
	long double getDiv() const { return a / b; }

	bool Init(long int a, long int b);
	void Read();
	void Display();
	void Comparison();
};

