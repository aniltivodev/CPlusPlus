// Write a program that asks the user to enter two integers, one named smaller, the other named larger.
// If the user enters a smaller value for the second integer, use a block and a temporary variable to swap the smaller and larger values.
// Then print the values of the smaller and larger variables. Add comments to your code indicating where each variable dies.
// Note: When you print the values, smaller should hold the smaller input and larger the larger input, no matter which order they were entered in.

#include <iostream>

int main() {
    int smaller {0};
    int larger {0};

    std::cout<< "Enter the smaller integer: : ";
    std::cin>>smaller;
    std::cout<< "Enter the larger integer: : ";
    std::cin>>larger;

    if (smaller > larger) {
        int temp {smaller}; // temp variable created
        smaller = larger;
        larger = temp;
        // temp variable dies here
    }

    std::cout<< "Smaller: " << smaller << "\n";
    std::cout<< "Larger: " << larger << "\n";
    return 0;
}
