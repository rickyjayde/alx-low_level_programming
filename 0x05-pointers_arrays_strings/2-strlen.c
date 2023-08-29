#include "main.h"
#include <stddef.h>

/**
 * _strlen - Calculates the length of a string
 * @s: Pointer to the input string
 * Return: The length of the string
 */
int _strlen(char *s)
{
    int length = 0; /* Declare the variable before any executable code */

    if (s == NULL)
        return 0;

    while (*s != '\0')
    {
        length++;
        s++;
    }

    return length;
}

