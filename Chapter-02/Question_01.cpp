#include<iostream>

int getInputFromUser()
{
    int userInput {0};
    std::cout<<"Enter a number: ";

    std::cin>>userInput;

    return userInput;
}

int doubleNumber(int input)
{
    return input * 2;
}

int main()
{
    std::cout<<"doubleNumber: " << doubleNumber(getInputFromUser()) << std::endl;

    return 0;
}