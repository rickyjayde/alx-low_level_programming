#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string
 * @str: The string to print
 *
 * Return: void
 */
void puts2(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            putchar(str[i]);
        }
    }
    putchar('\n');
}
