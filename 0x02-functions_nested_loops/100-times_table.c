#include <stdio.h>
#include "main.h"

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The value for which the times table will be printed
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, product;

		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				product = i * j;

				if (j == 0)
					printf("%d", product);
				else
					printf("   %d", product);

				if (j != n)
					printf(",");
			}
			printf("\n");
		}
	}
}

