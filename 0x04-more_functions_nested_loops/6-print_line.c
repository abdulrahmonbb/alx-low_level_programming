#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter
 * Return: void
 */

void print_line(int n)
{
	int i;

	i = 0;
	while (i <= n)
	{
		if (n != 0 && n > 0)
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
