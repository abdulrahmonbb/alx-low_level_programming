#include "main.h"

/**
 * print_last_digit - prints the last digit 
 * @n: number
 * @ld: last digit
 * Return: (0)
 */

int print_last_digit(int n)
{
	int ld;

	if (n < 0)
	{
		n = _abs(n);
		ld = n % 10;
		_putchar('0' + ld);

		return (ld);
	}
	else
	{
		ld = n % 10;
		_putchar('0' + ld);

		return (ld);
	}
}
