#include<iostream>

// First, let’s create a program that asks the user to enter an integer,
// waits for them to input an integer,
// then tells them what 2 times that number is. The program should produce the following output (assume I entered 4 as input):
// 
// With Quiz

int main()
{
    int x {};
    std::cout<<"Enter a number: ";
    std::cin>>x;
    std::cout<< x << " multiplied by 2 is " << (x * 2) << '\n';
    std::cout<< x << " multiplied by 3 is " << (x * 3) << '\n';
}
