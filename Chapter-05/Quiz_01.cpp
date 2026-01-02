// Write a program that asks the user to enter their full name and their age. As output, tell the user the sum of their age and the number of characters in their name (use the std::string::length() member function to get the length of the string). For simplicity, count any spaces in the name as a character.
#include <iostream>
#include <string>

int main()
{
    std::cout << "Enter your full name: ";
    std::string name {};
    std::getline(std::cin >> std::ws, name);

    std::cout << "Enter your age: ";
    int age {0};
    std::cin>>age;

    int lengthOfName {static_cast<int>(name.length())};
    std::cout<<"Hi, " << name << ", Your age is " << age << ", length of your name is " << lengthOfName << " and total is " << (lengthOfName + age) << std::endl;
}