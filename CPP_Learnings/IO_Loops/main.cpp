#include <iostream>
#include "C_inputs.h"
#include "C_outputs.h"

int main() {
	//C_inputs c_in;
	//c_in.getInt();
	//c_in.getDouble();
	//c_in.getString();

	//c_in.display();

	////std::istream input = std::cin;	cin can not be copied.
	//std::istream& input = std::cin;		// but referencing cin object through other alias is doable
	//int i;
	//input >> i;

	/*C_outputs c_out;
	c_out.getInt();
	c_out.getDouble();
	c_out.getString();
	c_out.getChar();

	std::cout << c_out;*/	// Used operator overloading for exploring.

	std::ostream& output = std::cout;		// similarly, cout object cannot be copied instead it can be referenced via other alias.
}