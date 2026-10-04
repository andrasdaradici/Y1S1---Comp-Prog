/*
Write a function int isdigit2(int c) that returns nonzero if c is a digit character and zero otherwise. Do not use isdigit in this exercise.
*/

#include <stdio.h>

int isdigit2(int c)
{
    if(c >= '0' && c <= '9')
    {
        return c;
    }
    return 0;
}

int main(void)
{
    int c = getchar();
    printf("%d", isdigit2(c));
    return 0;
}