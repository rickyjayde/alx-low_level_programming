#include <stdio.h>

/*
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int i, n;
    unsigned int fib1 = 1, fib2 = 2, nextFib;

    n = 98; /* Number of Fibonacci numbers to generate */

    printf("%d, %d", fib1, fib2);

    for (i = 3; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        printf(", %u", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");
    return (0);
}

