#include "Strings.h"
void Strings::setString() {
	std::cout << "Please input a string: " << std::endl;
	std::cin >> Strings::str;
}
void Strings::display() {
	std::cout << Strings::str << std::endl;
}