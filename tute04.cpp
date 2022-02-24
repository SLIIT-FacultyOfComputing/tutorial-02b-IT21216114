/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); 
long nCr(int n, int r); 

int main() {
  int n, r; //declaring variables
  
  std::cout << "Enter a value for n "; // promt a value for n
  std::cin >> n; //read the value for n
  
  std::cout << "Enter a value for r "; //promt a value for r
  std::cin >> r; //read a value for r
  
  std::cout << "nCr = "; //print
  std::cout << nCr(n,r);
  
  std::cout << std::endl; //new line
  return 0;
}

long Factorial(int no)
{
  
  int factorial = 1;
  while(no > 0)  
  {
    factorial = factorial * no;
    no--;
  }
  return factorial;
}

long nCr(int n, int r)
{
  return Factorial(n)/ Factorial(r) * Factorial(n - r);
}