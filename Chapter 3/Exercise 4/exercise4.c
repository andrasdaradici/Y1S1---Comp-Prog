/*
Write a program that reads all input and copies it to output, replacing every lowercase letter with its uppercase equivalent.
*/

#include <stdio.h>
#include <ctype.h>

int readAndPrint()
{
    int c;

    while ((c = getchar()) != EOF)
    {
        putchar(islower(c) ? toupper(c) : c);  
    }

    return 0;
}

int main(void)
{
    printf("%d", readAndPrint());
    return 0;
}