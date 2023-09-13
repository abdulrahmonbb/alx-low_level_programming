#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */

void times_table(void)
{
	int i, j, product;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			product = i * j;

			if (product > 9 && j != 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (product > 9 && j == 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if (product < 10 && j != 9)
			{
				_putchar(product + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (product < 10 && j == 9)
			{
				_putchar(product + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
