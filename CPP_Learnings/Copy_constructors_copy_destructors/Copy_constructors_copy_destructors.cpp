#include"Employee.h"
#include<vector>
#include <iostream>
using namespace std;

int main()
{
    //Employee e1("Vaibhav", 26);

    //Employee e2 = e1;   // Shallow copy of the object.

    //e2.fname = "Vaishnav";

    //e1.display();   // This will display Vaibhav and not Vaishnav

    //cout << "Address of e1: " << &e1 << " Address of e2: " << &e2 << endl;

    //cout << "Address of pointer member of e1: " << e1.ptr << endl; // ptr is a pointer to int.
    //cout << "Address of pointer member of e2: " << e2.ptr << endl;

    Employee e1("Vaibhav", 26);

    Employee e2 = e1;  // Calls the copy constructor (deep copy)

    e2.fname = "Vaishnav";  // Modify e2's name

    // Display both employees
    e1.display();  // Outputs: Name: Vaibhav, Age: 26, Value: 100
    e2.display();  // Outputs: Name: Vaishnav, Age: 26, Value: 200

    cout << "Address of pointer member of e1: " << e1.ptr << endl; // ptr is a pointer to int.
    cout << "Address of pointer member of e2: " << e2.ptr << endl;
}
