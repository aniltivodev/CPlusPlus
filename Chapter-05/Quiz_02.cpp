// Write a program that asks for the name and age of two people, then prints which person is older.
#include <iostream>
#include <string>

int main()
{
    std::cout<<"Enter the name of person #1: ";
    std::string nameOfFirstPerson {};
    std::getline(std::cin >> std::ws, nameOfFirstPerson);

    std::cout<<"Enter the age of " << nameOfFirstPerson << ": ";
    int ageOfFirstPerson {0};
    std::cin>>ageOfFirstPerson;

    std::cout<<"Enter the name of person #2: ";
    std::string nameOfSecondPerson {};
    std::getline(std::cin >> std::ws, nameOfSecondPerson);

    std::cout<<"Enter the age of " << nameOfSecondPerson << ": ";
    int ageOfSecondPerson {0};
    std::cin>>ageOfSecondPerson;

    if (ageOfFirstPerson > ageOfSecondPerson)
    {
        std::cout<<nameOfFirstPerson << " age(" << ageOfFirstPerson << ") is older than " << nameOfSecondPerson << " age (" << ageOfSecondPerson << ").\n";
    }
    else
    {
        std::cout<<nameOfSecondPerson << " age(" << ageOfSecondPerson << ") is older than " << nameOfFirstPerson << " age (" << ageOfFirstPerson << ").\n";        
    }

    return 0;
}