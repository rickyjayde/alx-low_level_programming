#include <stdio.h>

/* main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int fib1 = 1, fib2 = 2, nextFib, count = 0;

    printf("%d, %d", fib1, fib2);

    while (count < 96)
    {
        nextFib = fib1 + fib2;
        printf(", %d", nextFib);

        fib1 = fib2;
        fib2 = nextFib;

        count++;
    }

    printf("\n");

    return 0;
}

