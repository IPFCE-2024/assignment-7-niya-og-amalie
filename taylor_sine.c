#include "taylor_sine.h"
#include <stdio.h>

// function to calculate power (x^exp)
double power(double base, int exp)
{

  double result = 1.0; //Initialize result to 1 since any number powered to 0 is 1
  for (int i = 0; i < exp; i++) //Loop to multiply base by itself exp amount of times
  {
    result *= base; 
  }
  return result;
}

// function to calculate factorial (f!)
long long factorial(int f) //Initialize result to 1 since the factorial of 0 is 1
{
  long long result = 1.0;
  for (int i = 1; i <= f; i++) //Loop from 1 to f (inclusive) to calculate the factorial
  {
    result *= i;
  }
  return result;
}

double taylor_sine(double x, int n)
{
  // implement your function here
  double result = 0.0; //Initialize result to 0
  for (int i = 0; i < n; i++)
  { //Calculate exponent for current term (odd terms)
    int exponent = 2 * i + 1; //Ensures all powers are odd
    double term = power(x, exponent) / factorial(exponent); //Calculate current term (x^exponent / exponent!)

    if (i % 2 != 0) //If i is odd, subtract the term from the result
    { 
      term = -term;
    }
      result += term; //Add the current term to the result
  }
  return result;
}
