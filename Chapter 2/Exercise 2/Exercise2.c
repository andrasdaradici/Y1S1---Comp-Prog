/*
Write a function named max3 that returns the maximum of three double values by reusing max2.
*/
#include <stdio.h>

double max2(double x, double y)
{
    return x > y ? x : y;
}

double max3(double x, double y, double z)
{
    return max2(x, max2(y,z));
}
int main(void)
{
    double x = 5;
    double y = 6;
    double z = 2;
    printf("The biggest value is: ");
    printf("%f", max3(x,y,z));
    return 0;
}