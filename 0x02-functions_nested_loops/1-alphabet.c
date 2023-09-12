#include "main.h"

/**
 * print_alphabet - prints alphabets in lowercase, followed by
 * a new line.
 * Return: Always 0
 */

void print_alphabet(void)
{
	char c;

	c = 97;
	while (c <= 122)
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
}
