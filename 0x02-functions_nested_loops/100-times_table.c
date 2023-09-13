#include "main.h"

/**
 * print_times_table - prints times table from 0
 * @n: times table to use
 * Return: void
 */

void print_times_table(int n)
{

	int a = 0, b, product;

	if (n < 0 || n > 15)
		return;

	while (a <= n)
	{
		for (b = 0; b <= n; b++)
		{
			product = a * b;
			if (b == 0)
			{
				_putchar(product + '0');
			}
			else if (product < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			}
			else if (product < 100)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product / 100) + '0');
				_putchar(((product - 100) / 10) + '0');
				_putchar((product % 10) + '0');
			}
			if (b < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
		a++;
	}
}
