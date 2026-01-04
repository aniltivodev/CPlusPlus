// Write a program that asks the user to input an integer,
// and tells the user whether the number is even or odd.
// Write a constexpr function called isEven() that returns true if an integer passed to it is even,
// and false otherwise. Use the remainder operator to test whether the integer parameter is even.
// Make sure isEven() works with both positive and negative numbers.

#include <iostream>

constexpr bool isEven(int input)
{
    return ((input % 2) == 0);
}

int getInput()
{
    int input {0};
    std::cout <<"Enter a number: ";
    std::cin >> input;

    return input;
}

int main ()
{
    int input {getInput()};
    if (isEven(input))
    {
        std::cout << input << " is an even number.\n";
    }
    else
    {
        std::cout << input << " is an odd number.\n";
    }
    return 0;
}