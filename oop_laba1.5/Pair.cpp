//////////////////////////////////////////////////////////////////////////////
// Pair.cpp
#include "Pair.h"
#include <iostream>

using namespace std;

void Pair::SetA(double value)
{
	a = value;
}

void Pair::SetB(double value)
{
	b = value;
}



bool Pair::Init(double a, double b)
{
	SetA(a);
	SetB(b);
	return true;
}

void Pair::Read()
{
	double A, B;
	do
	{
		cout << "a = "; cin >> A;
		cout << "b = "; cin >> B;

	} while (!Init(A, B));
}

void Pair::Display() const
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

int Pair::Dobutok(int a, int b)
{
	return a * b ;
}
