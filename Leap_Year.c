/**
 * Generally, a year has 365 days in a year, but a leap year has 366 days which comes after four year.
 **/

/*
Following is Pseudo-code

1. Year must be divisible by 4 && Year is divisible by 400
2. But not divisible by 100.
*/
#include <stdio.h>

int main()
{
    int yr;

    printf("Enter a year \n to check its a Leap Year: ");
    scanf("%d", &yr);

    if ((yr % 4 == 0 && yr % 400 == 0) || (yr % 100 != 0))
    {
        printf("Its a Leap Year");
    }
    else
    {
        printf("Not a Leap Year");
    }
}