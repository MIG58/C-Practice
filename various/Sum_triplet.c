// Write a C program to compute the sum of the two given integer values.
// If the two values are the same, then return triple their sum.
//Expected Output:
//
//3
//12
#include <stdio.h>
#include <conio.h>
int main()
{
	int a,b,c;
	
	printf("Enter a values: ");
	scanf("%d",&a);
	
		c = a + a * 3;       // 1. a(3) x 3 = 9 >>>  2. 9 + 3 = 12 Ans.. 
		printf("Sum of Triplet: %d\n",c);
	
	getch();
	return 0;
}
