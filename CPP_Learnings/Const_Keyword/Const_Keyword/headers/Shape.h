#pragma once
#include <string>
using namespace std;
class Shape
{
	string shapeName;
public:
	Shape(const string& str);
	~Shape();

	void setShapeName(string& _name);

	void displayName() const;
};

