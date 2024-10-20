#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

int main() {

    //Test 1
    int n = 4;
    double x = 1;
    double result = taylor_sine(x, n);
    printf("Found sin: %lf\n", result);
    printf("sin = %lf\n", sin(x));

    //Test 2
    int n2 = 8;
    double x2 = 3;
    double result2 = taylor_sine(x2, n2);
    printf("Found sin: %lf\n", result2);
    printf("sin = %lf\n", sin(x2));

    //Test 3
    int n3 = 12;
    double x3 = 7;
    double result3 = taylor_sine(x3, n3);
    printf("Found sin: %lf\n", result3);
    printf("sin = %lf\n", sin(x3));

    //Test 4
    int n4 = 20;
    double x4 = 7;
    double result4 = taylor_sine(x4, n4);
    printf("Found sin: %lf\n", result4);
    printf("sin = %lf\n", sin(x4));
    

    //For input x=1 and x=3 the function gave a similar result to the ANSI C sin function
    //Increasing the precision (n) improves the accuracy for the small numbers like 1 and 3,
    //but for larger numbers like 7 the sin function will be inaccurate even with many terms like n=20
}
