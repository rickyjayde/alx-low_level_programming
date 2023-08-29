#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line to stdout
 * @str: Pointer to the input string
 */
void _puts(char *str)
{
	if (str != NULL)
	{
		while (*str != '\0')
		{
			putchar(*str);
			str++;
		}
	}
	putchar('\n');
}

