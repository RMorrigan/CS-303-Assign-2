// 303HW2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "HW2HEADER.H"

int main()
{
    vector_stack stack;
    std::cout << "Is stack empty? " << std::endl;
    if (stack.isEmpty() == true) {
        std::cout << "Yes" << std::endl;

    }
    else {
        std::cout << "No" << std::endl;
    }
    std::cout << "Adding values... " << std::endl;
    
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    
    std::cout << "Top of stack: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Top of stack after pop: " << stack.top() << std::endl;

    std::cout << "Average of stack elements: " << stack.average() << std::endl;
}

