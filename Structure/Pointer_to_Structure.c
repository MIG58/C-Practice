/**
 * Program to show pointer to structure
 *
 * &ptr->roll OR std.roll OR (*ptr).roll   <<<< These 3 are same
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>

struct student
{
    char name[20];
    int roll;
};

int main()
{
    struct student std;
    struct student *ptr;

    ptr = &std;

    printf("Enter the name: ");
    gets(ptr->name); // scanf("%[^\n]%*c",ptr->name); OR scanf("%[^\n]s",str);
    printf("\nEnter the Roll: ");
    scanf("%d", &ptr->roll); // std.roll OR (*ptr).roll

    printf("\nStudent Name: %s\n", ptr->name);
    printf("Student Roll: %d", ptr->roll);

    return 0;
}