#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 * Return: void
 */

void print_diagonal(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n != 0 && n > 0)
		{
			if (n > 1)
			{
				_putchar(' ');
				_putchar('\\');
				_putchar('\n');
			}
			else
			{
				_putchar('\\');
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
