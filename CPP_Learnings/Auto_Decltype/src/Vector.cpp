#include "Vector.h"
Vector::Vector(double _x, double _y) : x(_x), y(_y) {}
Vector Vector::operator-(const Vector& vec) {
	double dx = x - vec.x;
	double dy = y - vec.y;
	return Vector(dx, dy);
}
Vector::~Vector() {}