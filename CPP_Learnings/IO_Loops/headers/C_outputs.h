#pragma once
#include<iostream>
#include <string>
class C_outputs
{
public:
	int i;
	double d;
	std::string str;
	char c;

	void getInt();		// stores integer in i
	void getDouble();	// stores double in d
	void getString();	// stores string in str
	void getChar();

	void display();		// displays all data members

	friend std::ostream& operator<<(std::ostream& out, const C_outputs& c_outs);
};


