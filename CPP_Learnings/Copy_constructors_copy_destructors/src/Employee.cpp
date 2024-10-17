#include "Employee.h"

Employee::Employee() {
	std::cout << "Please input first name of the employee: " << std::endl;
	std::cin >> fname;
	std::cout << "Please input age of the employee: " << std::endl;
	std::cin >> age;
}
Employee::Employee(int _age) : age(_age) {}
Employee::Employee(std::string _fname, int _age) :fname(_fname), age(_age) {}

void Employee::display() {
	std::cout << fname << " " << age << std::endl;
}

// Copy Constructor (Deep Copy)
Employee::Employee(const Employee& other)
    : fname(other.fname), age(other.age), vec(other.vec), CO(other.CO) {
    std::cout << "Employee copy constructor called." << std::endl;
}

// Assignment Operator (Deep Copy)
Employee& Employee::operator=(const Employee& other) {
    if (this != &other) {  // Avoid self-assignment
        fname = other.fname;
        age = other.age;
        vec = other.vec;  // std::vector already handles deep copy
        CO = other.CO;    // Use CopyObj's assignment operator
    }
    return *this;
}

Employee::~Employee() {
	std::cout << "object deleted" << std::endl;
};