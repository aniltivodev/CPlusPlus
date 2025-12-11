#include <iostream>
/**
 * Writting a program to take three integer inputs using cin and sending them to standard buffer using cout.
 */

int main()
{
    int x {};
    int y {};
    int z {};

    std::cout<< "Enter three numbers(separated by spaces):";
    std::cin>> x >> y >> z;
    std::cout<< "You entered " << x << ", " << y <<" and " << z << '\n';

    return 0;
}
