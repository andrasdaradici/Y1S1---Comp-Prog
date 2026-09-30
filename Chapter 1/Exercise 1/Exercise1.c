/*
Write a C function named triple that receives an integer and returns three times
its value.
*/

#include <stdio.h>

int triple(int x)
{
    return x * 3;
}

int main(void)
{
    int x = 10;
    printf("The triple of ");
    printf("%d", x);
    printf(" is ");
    printf("%d", triple(x));
    return 0;
}