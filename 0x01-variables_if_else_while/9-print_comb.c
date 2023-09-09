#include <stdio.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			putchar('0' + x);
			putchar(',');
			putchar(' ');
			putchar('0' + y);
		}
	}
	return (0);
}
