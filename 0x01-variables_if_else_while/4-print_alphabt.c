#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 *              followed by a new line, except 'q' and 'e'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'a')
	{
		if (ch !='e' && ch !='q')
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');
			return (0);
}
