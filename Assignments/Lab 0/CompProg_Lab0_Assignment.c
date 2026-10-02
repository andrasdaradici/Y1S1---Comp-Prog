/*
Write a program that calculates the area and perimeter of a rectangle after reading in the value of the two sides.
*/

#include <stdio.h>

int calcPerimeter(int a, int b)
{
    return (2 * a) + (2 * b);
}

int calcArea(int a, int b)
{
    return a * b;
}

int main(void)
{
    int a, b;

    printf("Side A = ");
    scanf("%d", &a);

    printf("Side B = ");
    scanf("%d", &b);

    printf("The perimeter of the rectangle is %d\n", calcPerimeter(a,b));

    printf("The area of the rectangle is %d\n", calcArea(a,b));

    return 0;
}