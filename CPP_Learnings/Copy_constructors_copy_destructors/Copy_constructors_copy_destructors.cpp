#include"Employee.h"
#include<vector>
#include <iostream>

int main()
{
    Employee e1("Vaibhav", 26);

    Employee e2 = e1;   // This does shallow copy of the object but data member which is of string type does it's deep copy.

    e2.fname = "Vaishnav";

    e1.display();   // This will display Vaibhav and not Vaishnav
}
