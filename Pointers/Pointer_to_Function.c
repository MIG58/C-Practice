// Program to pass pointer as an argument using function
#include <stdio.h>
#include <stdlib.h>

void printage(int *);

void printage(int *Age)
{
    printf("%d", *Age);
}

int main()
{
    int age;
    int *Age = NULL; // init NULL is best practice

    Age = &age;

    printf("Age [%d]\n", Age);

    printf("Enter your Age: ");
    scanf("%d", &age);

    printf("Age [%d]\n", Age);

    printage(Age);
    return 0;
}