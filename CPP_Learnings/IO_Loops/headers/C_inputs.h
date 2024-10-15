#pragma once
#include <iostream>
#include <string>
class C_inputs
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
};

