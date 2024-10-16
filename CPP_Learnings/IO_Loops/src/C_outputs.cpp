#include "C_outputs.h"

void C_outputs::setInt() {
	std::cin >> i;
}

void C_outputs::setDouble() {
	std::cin >> d;
}

void C_outputs::setString() {
	std::cin >> str;
}

void C_outputs::setChar() {
	std::cin >> c;
}

void C_outputs::display() {
	std::cout << "integer: " << i << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout << "string: " << str << std::endl;
	std::cout << "Character: " << c << std::endl;
}


std::ostream& operator<<(std::ostream& os, const C_outputs& c_outs) {
	os << "integer: " << c_outs.i << std::endl;
	os << "double: " << c_outs.d << std::endl;
	os << "string: " << c_outs.str << std::endl;
	os << "Character: " << c_outs.c << std::endl;
	return os;
}