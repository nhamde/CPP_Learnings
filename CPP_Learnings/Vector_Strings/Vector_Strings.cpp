#include "Vectors.h"
#include "Strings.h"
#include <iostream>

int main()
{
    // First thing that to run a project from a solution file which includes multiple projects, we have to select which project to run from "Configure Startup Projects" from dropdown "Local Windows Debugger".
    Vectors Vecs;
    Vecs.setSize(5);    // function sets vector size as 5

    Vecs.intVec = { 1,2,3,4,5,6 };

    /*std::cout << Vecs.intVec.size() << std::endl;
    for (int i = 0; i < Vecs.intVec.size(); i++) {
        std::cout << Vecs.intVec[i] << std::endl;
    }*/

    std::cout << &Vecs.intVec << std::endl; // prints 0000006AFB8FF928 which is address of the intVec object
    std::cout << &Vecs.intVec[0] << std::endl;  // prints 0000017AD58908F0 which is address of the first element of the intVec object

    std::cout << std::endl;

    Strings Str;
    Str.setString();    // takes string from user and stores in object str
    Str.display();      //  displays string value
    std::cout << Str.str[0] << std::endl;       // displays first character of string as string is stored as array of characters
}

