#include "main.h"

/**
 * print_alphabet_x10 - print the alphabets 10 times followed by a
 * new line.
 * Return: Always 0
 */

void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 97;
		while (c <= 122)
		{
			_putchar(c);
			c++;
		}

		i++;
		_putchar('\n');
	}

}
