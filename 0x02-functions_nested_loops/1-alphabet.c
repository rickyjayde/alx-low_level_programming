#include main.h

/**
 * print_alphabet - Make the alphabet
 *
 * Return:void
 */

oid print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
