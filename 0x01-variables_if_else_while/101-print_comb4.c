#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints all possible different combinations of three digits
 *              where each digit is unique and in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = n + 1; m < 58; m++)
		{
			for (l = m + 1; l < 58; l++)
			{
				putchar(n);
				putchar(m);
				putchar(l);

				if (n != 55 || m != 56 || l != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}

