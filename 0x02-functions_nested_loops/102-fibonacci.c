#include <stdio.h>

int main(void)
{
    int n = 50; // Number of Fibonacci numbers to generate
    unsigned long long int fib1 = 1, fib2 = 2, nextFib;

    printf("%llu, %llu", fib1, fib2);

    for (int i = 3; i <= n; i++)
    {
        nextFib = fib1 + fib2;
        printf(", %llu", nextFib);
        fib1 = fib2;
        fib2 = nextFib;
    }

    printf("\n");

    return 0;
}

