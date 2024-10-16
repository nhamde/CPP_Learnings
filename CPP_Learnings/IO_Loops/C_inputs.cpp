#include "C_inputs.h"

void C_inputs::setInt() {
	std::cin >> i;
}

void C_inputs::setDouble() {
	std::cin >> d;
}

void C_inputs::setString() {
	std::cin >> str;
}

void C_inputs::setChar() {
	std::cin >> c;
}

void C_inputs::display() {
	std::cout << "integer: " << i << std::endl;
	std::cout << "double: " << d << std::endl;
	std::cout << "string: " << str << std::endl;
	std::cout << "Character: " << c << std::endl;
}