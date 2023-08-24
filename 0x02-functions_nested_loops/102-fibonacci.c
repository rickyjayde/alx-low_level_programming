#include <stdio.h>

/**
 * main - Entry point
 *
 * This program prints the first 50 Fibonacci numbers.
 * The numbers are separated by commas and followed by a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 50;
    unsigned long fib1 = 1, fib2 = 2, nextFib;
    int i;

    printf("%lu, %lu", fib1, fib2);

    for (i = 3; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        printf(", %lu", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}

