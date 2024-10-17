#pragma once
class Vector
{
public:
	Vector(double, double);
	double x, y;
	Vector operator-(const Vector&);
	~Vector();
};

