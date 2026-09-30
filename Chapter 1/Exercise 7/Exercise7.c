/*
Write a complete C program that prints the square of 7 using a function named sqr.
*/

#include <stdio.h>

int sqr(int x)
{
    return x * x;
}

int main(void)
{
    printf("The square of 7 is ");
    printf("%d", sqr(7));
    return 0;
}