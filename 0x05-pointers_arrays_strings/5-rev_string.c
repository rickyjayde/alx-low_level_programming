#include "main.h"
#include <stddef.h>

/**
 * rev_string - Reverses a string
 * @s: Pointer to the input string
 */
void rev_string(char *s)
{
	if (s != NULL)
	{
		int length = 0;
		int start = 0;
		int end;

		/* Calculate the length of the string */
		while (s[length] != '\0')
		{
			length++;
		}

		end = length - 1;

		/* Reverse the string */
		while (start < end)
		{
			char temp = s[start];
			s[start] = s[end];
			s[end] = temp;

			start++;
			end--;
		}
	}
}

