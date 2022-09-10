#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void swap(int, int);

int main()
{
    // clrsrc();
    int a = 10, b = 20;

    printf("Call by Value\n");

    printf("Before Call A=%d B=%d\n", a, b);

    swap(a, b); // function call with passing of address

    printf("After Call A=%d B=%d\n", a, b);

    return 0;
}
void swap(int a1, int b1)
{
    int temp;

    temp = a1;
    a1 = b1;
    b1 = temp;

    printf("Function Call A=%d B=%d\n", a1, b1);
}