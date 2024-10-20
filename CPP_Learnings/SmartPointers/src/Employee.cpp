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

Employee::Employee(const Employee& other)
    : fname(other.fname), age(other.age), vec(other.vec) {
    std::cout << "Employee copy constructor called." << std::endl;
}

Employee& Employee::operator=(const Employee& other) {
    if (this != &other) { 
        fname = other.fname;
        age = other.age;
        vec = other.vec; 
    }
    return *this;
}

Employee::~Employee() {
    std::cout << "object deleted" << std::endl;
};