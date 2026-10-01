/*
Write a function named clamp100 that receives an integer and returns:
• 0, if the value is smaller than 0;
• 100, if the value is larger than 100;
• the original value otherwise.
*/

#include <stdio.h>

int clamp100(int x)
{
    if (x <= 0)
        return 0;
    if (x >= 100)
        return 100;
    else return x;
}

int main(void)
{
    int x = 101;
    printf("The value ");
    printf("%d", x);
    printf(" clamped in the interval [0, 100] is ");
    printf("%d", clamp100(x));
    return 0;
}