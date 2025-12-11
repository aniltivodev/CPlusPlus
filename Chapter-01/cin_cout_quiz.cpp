#include <iostream>

/**
 * Try this program with:
 * * A letter, such as 'h'.
 * * A number with a fractional part (e.g. 3.2). Try numbers with fractional parts less than 0.5 and greater than 0.5 (e.g. 3.2 and 3.7).
 * * A small negative integer, such as -3.
 * * A word, such as Hello.
 * * A really big number (at least 3 billion).
 * * A small number followed by some letters, such as 123abc.
 * * A few letters followed by a small number, such as abc123.
 * * '   +5' (three spaces, followed by a plus symbol, and a 5).
 */
int main()
{
    std::cout << "Enter a number: ";
    int x{};
    std::cin >> x;
    std::cout << "You entered " << x << '\n';

    return 0;
}
