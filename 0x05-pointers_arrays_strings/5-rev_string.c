#include "main.h"

/**
 * rev_string - reverses a string
 *
 * @s: character string
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length = 0, i;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length / 2; i++)
	{
		char temp = s[i];

		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
}
