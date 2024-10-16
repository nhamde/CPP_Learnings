#include "Stacker.h"
#include <iostream>

int main()
{
    Stacker Stack;
    Stack.stack.push(10);
    Stack.stack.push(100);
    Stack.stack.push(1000);

    std::cout << "top element: " << Stack.stack.top() << std::endl;

    Stack.stack.pop();
    std::cout << "top element after removing previous top element: " << Stack.stack.top() << std::endl;

    if (!Stack.stack.empty()) {
        std::cout << "The stack is not empty." << std::endl;
    }
    else std::cout << "The stack is empty." << std::endl;

    std::cout << "The size of the stack is: " << Stack.stack.size() << std::endl;
}
