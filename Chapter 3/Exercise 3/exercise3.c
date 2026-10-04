/*
Write a program that reads all input and counts how many digit characters occur in it.
*/

#include <stdio.h>
#include <ctype.h>

int countDigits()
{
    int count = 0;
    int c;
    while((c = getchar()) != EOF)
    {
        if(isdigit(c))
        {
            count +=1;
        }
    }

    return count;
}

int main (void)
{
    printf("%d", countDigits());
    return 0;
}