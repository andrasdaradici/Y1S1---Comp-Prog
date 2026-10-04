/*
Write a function int digit_value(int c) that returns the numeric value of a digit character. For example, for ’7’ it should return 7. State what precondition must hold for the function to be used correctly
*/

/*
The precondition for this function to work correctly is to first check if the char is a digit or no before returning any value.
*/

#include <stdio.h>
#include <ctype.h>

int digit_value(int c)
{
    if(isdigit(c))
    {
        return c - '0';
    }
    else return -1;
}

int main(void)
{
    int c = getchar();
    printf("%d", digit_value(c));
    return 0;
}