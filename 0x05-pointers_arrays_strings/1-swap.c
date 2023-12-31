#include "main.h"
#include <stddef.h>

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to the first integer
 * @b: Pointer to the second integer
 */
void swap_int(int *a, int *b)
{
	if (a != NULL && b != NULL)
	{
		int temp = *a;
		*a = *b;
		*b = temp;
	}
}

