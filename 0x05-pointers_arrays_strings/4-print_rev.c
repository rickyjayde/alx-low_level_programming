#include "main.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_rev - Prints a string in reverse followed by a new line
 * @s: Pointer to the input string
 */
void print_rev(char *s)
{
    if (s != NULL)
    {
        int length = 0;
        int i; /* Declare loop variable outside the loop */
        
        /* Calculate the length of the string */
        while (s[length] != '\0')
        {
            length++;
        }
        
        /* Print characters in reverse order */
        for (i = length - 1; i >= 0; i--)
        {
            putchar(s[i]);
        }

        putchar('\n');
    }
}

