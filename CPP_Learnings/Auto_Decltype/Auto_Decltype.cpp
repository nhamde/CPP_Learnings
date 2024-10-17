#include <iostream>
#include "Vector.h"
using namespace std;
int main()
{
    Vector point1(1, 5);
    Vector point2(5, 8);
    auto line1 = point2 - point1;    // auto derives the type of line object.
    Vector point3(9, 9);
    decltype(line1) line2 = point1 - point3;

    cout << "line1.x: " << line1.x << " line1.y: " << line1.y << endl;
    cout << "type of line1: " << typeid(line1).name() << endl;
    cout << "type of line2: " << typeid(line2).name();
}
