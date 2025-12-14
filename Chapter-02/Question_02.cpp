/**
 * Write a single-file program (named main.cpp) that reads two separate integers from the user, adds them together, and then outputs the answer. The program should use three functions:
 *  A function named “readNumber” should be used to get (and return) a single integer from the user.
 *  A function named “writeAnswer” should be used to output the answer. This function should take a single parameter and have no return value.
 * A main() function should be used to glue the above functions together.
 */

/**
 * Modified for:
 * Modify the program you wrote in exercise #1 so that readNumber() and writeAnswer() live in a separate file called “io.cpp”. Use a forward declaration to access them from main().
 */

/**
 * Modified for:
 * Modify the program you wrote in #2 so that it uses a header file (named io.h) to access the functions instead of using forward declarations directly in your code (.cpp) files. Make sure your header file uses header guards.
 */

 #include <iostream>
 #include "Question_02_io.h"

// int readNumber();

// void writeAnswer(int answer);

 int main()
 {
    int x {readNumber()};
    int y {readNumber()};
    writeAnswer(x + y);
    return 0;
 }