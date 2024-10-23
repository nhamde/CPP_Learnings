#include <iostream>
#include "Shape.h"

int main()
{
    string str = "rectangle";
    Shape s1(str);
    s1.displayName();

    const Shape s2("Circle");
    s2.displayName();

    Shape* const ptrS1 = new Shape("Square");
    ptrS1->displayName();
    ptrS1->setShapeName(str);

    ptrS1 = &s1;
    ptrS1->displayName();
    ptrS1->setShapeName(str);
}
