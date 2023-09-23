#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	if ( n == 0)
	{
		_putchar(48);
	}
	else
	{
		if (n < 0)
		{
			n *= -1;

			if (n > 99)
			{
				_putchar('-');
				_putchar((n / 100) + '0');
				_putchar((n % 100) / 10 + '0');
				_putchar((n % 100) % 10 + '0');
			}
			else if (n < 100 && n > 9)
			{
				_putchar('-');
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else if (n < 9)
			{
				_putchar('-');
				_putchar(n);
			}
		}
		else if (n < 10 && n != 0)
		{
			
			_putchar(n);
		}
		else if (n > 10 && n < 100)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else if (n > 100 && n < 1000)
		{
			_putchar((n / 100) + '0');
			_putchar((n % 100) / 10 + '0');
			_putchar((n % 100) % 10 + '0');
		}
		else if (n > 1000)
		{
			_putchar((n / 1000) + '0');
			_putchar((n % 1000) / 100 + '0');
			_putchar((n % 1000) / 10 + '0');
			_putchar((n % 1000) % 10 + '0');
		}
	}	
}
