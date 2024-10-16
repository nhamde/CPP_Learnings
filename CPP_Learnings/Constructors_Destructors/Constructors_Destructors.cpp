#include"Employee.h"

#include <iostream>

int main()
{
    Employee e1("Vaibhav", 26);
    e1.display();

    Employee e2;
    e2.display();

    Employee e3(30);
    e3.display();
}
