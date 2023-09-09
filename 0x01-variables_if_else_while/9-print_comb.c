#include <stdio.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
			putchar('0' + x);
			putchar(',');
			putchar(' ');
	}

	putchar('\n');
	return (0);
}
