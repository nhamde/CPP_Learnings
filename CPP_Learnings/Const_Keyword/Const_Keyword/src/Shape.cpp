#include "Shape.h"
#include <iostream>

Shape::Shape(const string& str) : shapeName(str) {}
Shape::~Shape() {}

void Shape::displayName() const
{
	cout << shapeName << endl;
}

void Shape::setShapeName(string& _name)
{
	shapeName = _name;
}