/*
Write a complete C program that defines a function is_inside(int x, int lo, int hi) returning 1 if x is between lo and hi, inclusive, and 0 otherwise. The main function should print the result for at least three test cases.
*/

#include <stdio.h>

int is_inside(int x, int lo, int hi)
{
    if (x < lo)
        return 0;
    if (x > hi)
        return 0;

    return 1;
}

int main(void)
{
    int x = 3;
    int y = 20;
    int z = 60;

    int low = 10;
    int hi = 60;

    printf("%d", is_inside(x, low, hi));
    printf("\n");
    printf("%d", is_inside(y, low, hi));
    printf("\n");
    printf("%d", is_inside(z, low, hi));
    return 0;
}