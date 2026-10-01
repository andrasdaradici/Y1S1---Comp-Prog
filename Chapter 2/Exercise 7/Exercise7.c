/* 
In the quadratic-root example, identify the missing validation case. Modify the function so that it handles a == 0 before applying the quadratic formula.
*/

#include <math.h>
#include <stdio.h>

void printsol ( double a , double b , double c )
{
    if (a == 0)
    {
        printf("The provided equation is not a quadratic equation.");
    }
    else
    {
        double delta = b * b - 4 * a * c ;

        if (delta >= 0)
        {
            printf(" root 1: %lf\n", ( - b - sqrt ( delta ) ) / 2 / a ) ;
            printf(" root 2: %lf\n", ( - b + sqrt ( delta ) ) / 2 / a ) ;
        } 
        else
        {
            printf("no solution \n") ;
        }
    }
}

int main(void)
{
    double a = 0;
    double b = 3;
    double c = 7;

    printsol(a,b,c);

    return 0;
}