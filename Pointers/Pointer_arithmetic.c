// Program to understand about pointer arithmetic
/** Syantax allowed (pointer add & substract is done in bytes)
 *
 *  ptr = ptr + 1;   ==>  ptr = ptr + sizeof(int)
 *
*   1> ptr++
    2> ptr--
    3> ptr = ptr + 2
    4> ptr = ptr - 3
    *These are all valid operations*
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 34;
    int *ptr = &a; // for char 1 byte only

    printf("Address of ptr: %d\n", ptr);           // 6487572
    printf("\nAddress of ptr + 1: %d\n", ptr + 1); // 6487576 + 4bytes (because sizeof(int) is 4 bytes)
    printf("Address of ptr - 1: %d\n", ptr - 1);   // 6487568 - 4bytes
    printf("\nAddress of ptr++: %d\n", ptr++);     // 6487572 + 4bytes
    printf("Address of ptr--: %d\n", ptr--);       // 6487576 - 4bytes
    printf("Dereference: %d", *&*&*ptr);           // Dereferencing a pointers
    printf("Dereference: %d", &*&*&*ptr);
    // scanf("", );

    return 0;
}