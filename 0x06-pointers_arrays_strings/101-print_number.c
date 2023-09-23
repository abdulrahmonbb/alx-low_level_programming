#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 9)
	{
		_putchar(n);
	}
	else if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
}
