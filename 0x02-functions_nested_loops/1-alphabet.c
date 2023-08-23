#include "main.h"

/**
 * print_alphabet - Prints the lowercase alphabet
 *
 * Description: Prints all lowercase letters from 'a' to 'z'
 *              using the _putchar function
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
