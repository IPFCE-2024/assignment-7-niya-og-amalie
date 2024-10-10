#include "taylor_sine.h"
#include <stdio.h>

// function to calculate power (x^exp)
double power(double base, int exp)
{ // basen x og potensen exp

  double result = 1.0; // starter i 1 fordi noget opløftet i 0 giver 1
  for (int i = 0; i < exp; i++)
  {
    result *= base;
  }
  printf("%lf\n", result);
  return result;
}

// function to calculate factorial (f!)
unsigned long long factorial(int f)
{

  unsigned long long result = 1;
  for (int i = 1; i <= f; i++) // starter i 1 og kører til og med factorial
  {
    result *= i; // ganger det forrige tal med den gældende runde
  }
  printf("%lf\n", result);
  return result;
}

double taylor_sine(double x, int n)
{
  // implement your function here
double result = 0.0;
  for (int i = 0; i < n; i++)
  {

    
    int exponent = 2 * i + 1; // sørger for alle potenser er ulige tal

    double term = power(x, exponent) / (double)factorial(exponent); // led er x opløftet i exp over exp fakultet

    if (i % 2 != 0)
    { // hvis tælleren har en rest (ulige tal) skal termen trækkes fra den forrige
      term = -term;
    }
    else
    {
      result += term;
    }
     // lægger termen til den forrige term
  }
  return result;
}
