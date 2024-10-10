#include "taylor_sine.h"
#include <stdio.h>
#include <math.h>

int main() {
    
    int n = 5;
    double x = 7;
    double result = taylor_sine(x, n);

    printf("Found sin: %lf\n", result);
    printf("sin = %f\n", sin(x));


}