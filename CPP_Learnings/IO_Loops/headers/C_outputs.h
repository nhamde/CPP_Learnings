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

	void setInt();		// stores integer in i
	void setDouble();	// stores double in d
	void setString();	// stores string in str
	void setChar();

	void display();		// displays all data members

	friend std::ostream& operator<<(std::ostream& out, const C_outputs& c_outs);
};


