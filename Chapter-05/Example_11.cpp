#include <iostream>
#include <string>

int main()
{
    std::string name{ "Alex" };
    std::cout << name << " has " << name.length() << " characters\n";
    // std::cout << name << " has " << std::ssize(name) << " characters\n"; // Starts from C++20 - Currently i am compiling with C++17.

    return 0;
}
