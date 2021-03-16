//////////////////////////////////////////////////////////////////////////////
// Pair.h
#pragma once
class Pair
{
private:
	double a;
	double b;

public:
	double GetA() const { return a; }
	double GetB() const { return b; }

	void SetA(double value);
	void SetB(double value);

	bool Init(double a, double b);
	void Display() const;
	void Read();

	int Dobutok(int a, int b);
};
