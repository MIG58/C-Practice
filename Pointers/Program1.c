/**
 * Program to Understand &,*,sizeof() operators use in pointers
 *
 *  &  (address of Operator)
 * To access address of a variable to a pointer,
 *  we use the unary operator & (ampersand) that returns the address of that variable.
 *  For example &x gives us address of variable x.
 *
 *  * (value at address Operator / Indirection Operator)
 *  It is a unary * (Asterisk) operator which is used for two things :
 *
 *     1. To declare a pointer variable.
 *         (When a pointer variable is declared in C/C++, there must be a * before its name.)
 *
 *          Example -
 *              int *ptr; //declaration
 *
 *     2. To access the value stored in the address we use the unary operator (*) that returns the value of the variable
 *        located at the address specified by its operand. This is also called Dereferencing.
 *
 *        Example - (Full Pointer & Normal Variable working)
 *
 *        int v=23,*ptr;   // Assume address of v is (0x33)
 *                         // Assume address of *ptr is (0xFF)
 *        ptr = &v;
 *
 *        print( v )      23
 *        print( &v )     0x33
 *        print( *(&v) )  23  ( {&v}=address of v | *{ }= value of address {&v} of v )
 *        print( &(*v) )  Error because v is not a pointer type variable
 *
 *        print(ptr)  (0x33)
 *        print(*ptr)  23
 *        print(&ptr)  0xFF (pointer self address)
 *
 *        print( &(*ptr) )  0xFF  (Address of variable pointing -> 0xFF[v] )
 *        print( *(&ptr) )  0xFF  (Address of variable pointing -> 0xFF[v] )
 *
 *         Hence in terms of pointer variable " &(*ptr) or *(&ptr) " both are same
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 21;
    int *pAge = &age;

    char ch = 'A';
    char *pch = &ch;

    double df = 5.22;
    double *Pdf = &df;

    {
        printf("The value of age: %d\n", age);
        printf("The address of age: %d\n", &age);

        printf("\nThe value stored in Pointer age: %d\n", pAge); // (stored the address of age)
        printf("The address of Pointer age: %d\n", &pAge);
    }

    printf("The value stored in Pointer age: %d\n", pAge);  // print value stored in pointer variable
    printf("The value of age using *pointer: %d\n", *pAge); // print value of age using pointer variable

    printf("\nPointer Tricks\n");
    printf(" *(&age): %d\n", *(&age)); // *(&normal-variable) => 21 (The value of age)
    printf(" &(*age): error\n");       // [error: invalid type argument of unary '*']

    printf("\n &(*pAge): %d\n", &(*pAge)); // &(*pAge) => meaning *pointerVariable (address of age using pointer variable)
    printf(" *(&pAge): %d\n", *(&pAge));

    // Checking size of pointer;

    // All datatype Pointer size is 8 bytes according to GCC 64bit/32bit
    // All datatype Pointer size is 2 bytes according to {TurboC 16 bit compiler}

    printf("\nThe size of char: %d\n", sizeof(ch));
    printf("The size of Pointer char: %d\n", sizeof(pch));

    printf("\nThe size of int: %d\n", sizeof(age));
    printf("The size of Pointer int : %d\n", sizeof(pAge));

    printf("\nThe size of double: %d\n", sizeof(df));
    printf("The size of Pointer double: %d\n", sizeof(Pdf));

    // scanf("", );

    return 0;
}