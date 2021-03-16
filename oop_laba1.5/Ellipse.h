//////////////////////////////////////////////////////////////////////////////
// Ellipse.h
#pragma once
#include "Pair.h"

class Ellipse
{
private:
	Pair pair;

public:
	double GetA() const { return pair.GetA(); }
	double GetB() const { return pair.GetB(); }


	void SetA(double value);
	void SetB(double value);


	bool Init(double a, double b);
	void Display() const;
	void Read();

	double Square() const;
	double Perimeter() const;

};
