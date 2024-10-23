#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
    /*unique_ptr<Employee> ptrE1 = make_unique<Employee>("Aryan", 21);
    cout << ptrE1 << endl << endl;
    ptrE1->display();

    unique_ptr<Employee> ptrE2 = ptrE1;
    Employee* e1;
    e1 = ptrE1;*/

    shared_ptr<Employee> sPtrE2 = make_shared<Employee>("Narayan", 26);
    /*{
        shared_ptr<Employee> sPtrE3 = sPtrE2;
        cout << sPtrE3 << endl;
        cout << "in nested scope count: " << sPtrE2.use_count() << endl;
    }*/
    cout << "Shared pointer's count: " << sPtrE2.use_count() << endl;

    sPtrE2.reset();
    cout << "count after using weak pointer: " << sPtrE2.use_count() << endl;
    weak_ptr<Employee> wPtrE4 = sPtrE2;
    shared_ptr<Employee> sPtrE5 = wPtrE4.lock();
    if (sPtrE5)
        cout << "object exists" << endl;
    else
        cout << "object does not exist" << endl;

}
