/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include <iostream>

long Factorial(int no); // call the function
long nCr(int n, int r); // call the function

int main() {
  int n, r;

  std::cout << "Enter a value for n "; //get user inputs
  std::cin >> n;

  std::cout << "Enter a value for r "; //get user inputs
  std::cin >> r;

  std::cout << "nCr = "; //print the value

  std::cout << nCr(n,r);

  std::cout << std::endl;
  
  return 0;
}

long Factorial(int no) // calculation form function
{
  long factorial=1 ;

  for(int i=1 ; i<=no ; i++)
  {
    factorial = factorial*i ;
  }
 
 return factorial;
}

long nCr(int n, int r) // calculation from function
{
  long nCr=0;

  nCr = Factorial(n)/(Factorial(r)*Factorial(n-r));

  return nCr;
}