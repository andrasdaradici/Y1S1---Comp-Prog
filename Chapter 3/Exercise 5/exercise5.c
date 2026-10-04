/*
Write a function int skipspaces(void) that reads and discards whitespace characters from standard input and returns the first non-whitespace character, or EOF.
*/

#include <stdio.h>
#include <ctype.h>

int skipspaces(void)
{
    int c;
    
    while((c = getchar()) != EOF)
    {
        if(!isspace(c)) return c;
    }

    return EOF;
}

int main(void)
{
    putchar(skipspaces());
    return 0;
}