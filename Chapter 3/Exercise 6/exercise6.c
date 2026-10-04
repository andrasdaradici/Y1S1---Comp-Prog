/*
Write a function unsigned readnat(void) that reads a natural number digit by digit. Then extend it so that it reports whether at least one digit was actually read.
*/

#include <stdio.h>
#include <ctype.h>

bool readDigit = false;

unsigned readnat(void)
{
    int c;
    int r = 0;

    readDigit = false;

    while ((c = getchar()) != EOF && isdigit(c))
    {
        r = (r * 10) + (c - '0');

        if(readDigit == false) readDigit = true;
    }

    return r;
}

int main(void)
{
    int n = readnat();
    
    if (readDigit)
    {
        printf("Read number: %d", n);
    }
    else
    {
        printf("No digits were read!");
    }
    return 0;
}