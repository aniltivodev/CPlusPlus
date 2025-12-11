#include<iostream>

// Write a program that asks the user to enter a number,
// and then enter a second number.
// The program should tell the user what the result of adding and subtracting the two numbers is.

int main()
{
    int x {};
    int y {};

    std::cout << "Enter first digit: ";
    std::cin>>x;

    std::cout << "Enter second digit: ";
    std::cin>>y;

    std::cout << "Addition of " << x << " and " << y << " is " << (x + y) << '\n';
    std::cout << "Substraction of " << x << " and " << y << " is " << (x - y) << '\n';
}
