/*
Write a C function named triple that receives an integer and returns three times
its value
*/

#include <stdio.h>

int triple(int x)
{
    return x * 3;
}

int main(void)
{
    printf("The triple of 5 is ");
    printf("%d", triple(5));
    return 0;
}