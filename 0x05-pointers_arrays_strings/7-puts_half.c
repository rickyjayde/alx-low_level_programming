#include <stdio.h>
#include <string.h>
#include <stddef.h>

void puts_half(char *str)
{
    int n, start;

    n = strlen(str);
    start = (n % 2 == 0) ? n / 2 : (n - 1) / 2;

    for (int i = start; i < n; i++)
    {
        putchar(str[i]);
    }
    putchar('\n');
}
