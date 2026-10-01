/*
Write a C function named avg2 that receives two double values and returns their arithmetic mean.
*/

#include <stdio.h>

double avg2(double x, double y)
{
    return (x + y) / 2;
}

int main(void)
{
    double x = 15;
    double y = 10;

    printf("The arithmetic mean of ");
    printf("%f", x);
    printf(" and ");
    printf("%f", y);
    printf(" is ");
    printf("%f", avg2(x,y));

    return 0;
}