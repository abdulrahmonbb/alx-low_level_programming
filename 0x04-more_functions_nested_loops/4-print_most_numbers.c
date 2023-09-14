#include "main.h"

/**
 * print_most_numbers - prints the numbers from 0-9 except 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	c = 48;
	while (c <= 57)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
		c++;
	}
	_putchar('\n');
}
