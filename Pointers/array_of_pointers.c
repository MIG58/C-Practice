/**
 * Program to show array of pointers concepts
 *
 */
#include <stdio.h>
#include <stdlib.h>
#define size 5
int main()
{
    int arr[5], i;
    int *ptr = arr;

    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        printf("[%d]: ", (i + 1));
        scanf("%d", &*(ptr + i)); // input array elements using pointers
                                  // scanf("%d", &arr[i]);
    }

    printf("Array of position 3 = [%d]\n", &*(ptr + 2));

    for (i = 0; i < size; i++)
    {
        printf("[%d] ", &*(ptr + i));
    }

    printf("\n");
    for (i = 0; i < size; i++)
    {
        printf("[  %d  ] ", *(ptr + i)); // Dereferencing pointer
    }

    return 0;
}