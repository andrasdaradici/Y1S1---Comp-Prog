/*
Write a function named max2 that returns the maximum of two double values
*/
#include <stdio.h>

double max2(double x, double y)
{
    return x > y ? x : y;
}

int main(void)
{
    double x = 5;
    double y = 6;
    printf("The bigger value is: ");
    printf("%f", max2(x,y));
    return 0;
}