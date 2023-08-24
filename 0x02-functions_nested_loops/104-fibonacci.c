#include <stdio.h>

int main(void)
{
    int n = 98; /* Number of Fibonacci numbers to generate */
    unsigned int fib1 = 1, fib2 = 2, nextFib;
    int i; /* Declare 'i' here */

    printf("%u, %u", fib1, fib2);

    for (i = 3; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        printf(", %u", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}

