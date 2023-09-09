#include <stdio.h>

/**
 * main - main block
 * Return: (0)
 */

int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + 48);
		n++;
	}
	
	putchar('\n');
	return (0);
}
