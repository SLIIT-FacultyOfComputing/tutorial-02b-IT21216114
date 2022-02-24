/*Exercise 3 - Repeatition

Convert the C program given below which calculates the Factorial of a number that you input from the keyboard to a C++ program.

Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

#include <iostream>
int main()
{ //main function begins program execution
    int no; //declaring variables
    long fac; //declaring variables

    std::cout << "Enter a Number : "; //prompt a number
    std::cin >> no; //read the number

    fac = 1;
    for (int r=no; r >= 1; r--) {
        fac = fac * r;
    }

    std::cout << "Factorial of "<< no <<" is " << fac; //print
    std::cout << std::endl; //new line
    return 0;
} //end of the main function