#include "SmartPtr.h"
#include "Employee.h"
#include <iostream>
using namespace std;

#include <iostream>

int main()
{
    SmartPtr<Employee> smPtrToEmp(new Employee);

    smPtrToEmp->display();
    (*smPtrToEmp).display();
    {
        cout << "Intializing new smart pointer" << endl;
        SmartPtr<Employee> smPtrToEmp2(new Employee("Narayan", 26));
        smPtrToEmp = smPtrToEmp2;
        cout << "second smart pointer going out of scope" << endl;
    }

    Employee* rawPtr = smPtrToEmp.release();
    cout << rawPtr << endl;
    rawPtr->display();
    delete rawPtr;
}