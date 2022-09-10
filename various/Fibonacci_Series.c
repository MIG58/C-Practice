#include <stdio.h>
int main()
{
    int a = 0, b = 1, c = 0, i, n;

    printf("Enter a range: ");
    scanf("%d", &n);

    printf("%d %d ", a, b); // printing 0 and 1

    for (i = 2; i <= n; i++) // loop starts from 2 because 0 and 1 are already printed
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    // printf("Final Output: %d ", c);

    // if (2 + 3 % 5)
    //     printf("OK");
}