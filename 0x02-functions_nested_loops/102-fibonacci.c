#include <stdio.h>

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

