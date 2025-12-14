#include <iostream>
 
int readNumber()
 {
    int num {0};

    std::cout<< "Enter a number: ";
    std::cin>>num;

    return num;
 }

 void writeAnswer(int answer)
 {
    std::cout<< "Answer: " << answer << '\n';
 }
