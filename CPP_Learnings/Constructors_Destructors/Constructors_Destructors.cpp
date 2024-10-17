#include"Employee.h"
#include<vector>
#include <iostream>

int main()
{
    Employee e1("Vaibhav", 26);
    e1.display();

    Employee e2;
    e2.display();

    Employee e3(30);
    e3.display();

    std::vector<Employee*>Es;    //Passing objects in to vector will copy objects and save in the vector, this causes unneccessary memory usage.
    Es.push_back(&e1);
    Es.push_back(&e2);
    Es.push_back(&e3);

    for (int i = 0; i < Es.size(); i++)
        Es[i]->display();
}
