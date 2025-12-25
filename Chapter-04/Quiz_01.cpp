// Quize 1: Write a short program where the user is asked to enter a single character. Print the value of the character and its ASCII code, using static_cast.

// Quize 2: Modify the program you wrote for quiz #1 to use implicit type conversion instead of static_cast. How many different ways can you think of to do this?
#include <iostream>

int main()
{
	char a;
	std::cout<< "Enter a single character:";
	std::cin>>a;
	int b = a;
	// std::cout<<"You entered '" << a << "', which has ASCII code "<< static_cast<int>(a) <<'\n';
	std::cout<<"You entered '" << a << "', which has ASCII code "<< b <<'\n';

	return 0;
}
