#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 * Return: void
 */

void jack_bauer(void)
{
	int h0, h1;
	int m0, m1;
	int c = 9;

	h0 = 0;
	while (h0 <= 2)
	{
		if (h0 == 2)
		{
			c = 3;
		}
		h1 = 0;
		while (h1 <= c)
		{
			m0 = 0;
			while (m0 <= 5)
			{
				m1 = 0;
				while (m1 <= c)
				{
					_putchar('0' + h0);
					_putchar('0' + h1);
					_putchar(':');
					_putchar('0' + m0);
					_putchar('0' + m1);
					_putchar('\n');
					m1++;
				}
				m0++;
			}
			h1++;
		}
		h0++;
	}
}
