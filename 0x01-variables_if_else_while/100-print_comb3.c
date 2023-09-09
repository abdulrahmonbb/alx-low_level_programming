#include <stdio.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	int c = 0;

	while (c < 10)
	{
		putchar(48 + c);
		putchar((48 + c) + 1);
		putchar(',');
		putchar(' ');
		c++;
	}

	putchar('\n');
	return (0);
}
