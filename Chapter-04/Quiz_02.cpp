// Write the following program: The user is asked to enter 2 floating point numbers (use doubles). 
// The user is then asked to enter one of the following mathematical symbols: +, -, *, or /.
// The program computes the answer on the two numbers the user entered and prints the results.
// If the user enters an invalid symbol, the program should print nothing.
#include <iostream>

void calculateBasedOnSymbol(double a, double b, char symbol)
{
    switch (symbol)
    {
        case '+':
        {
            std::cout<< a << " " << symbol << " " << b << " is " << a + b << '\n';
            break;
        }
        case '-':
        {
            std::cout<< a << " " << symbol << " " << b << " is " << a - b << '\n';
            break;
        }
        case '/':
        {
            std::cout<< a << " " << symbol << " " << b << " is " << a / b << '\n';
            break;
        }
        case '*':
        {
            std::cout<< a << " " << symbol << " " << b << " is " << a * b << '\n';
            break;
        }
        default:
        {
            // no-op
            break;
        }
    }
}

int main()
{
    double a;
    double b;
    char symbol;
    std::cout<<"Enter 2 floating point numbers: ";
    std::cin>>a;
    std::cin>>b;
    std::cout<<"Enter a mathematical symbols(+, -, *, or /): ";
    std::cin>>symbol;
    calculateBasedOnSymbol(a, b, symbol);

    return 0;
}