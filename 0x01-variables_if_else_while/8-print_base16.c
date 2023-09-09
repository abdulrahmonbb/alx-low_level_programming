#include <stdio.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);
		c++;
	}

	c = 'A';
	while (c <= 'F')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
