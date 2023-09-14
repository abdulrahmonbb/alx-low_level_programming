#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers, starting with 0
 * and 1.
 * Return: Always 0
 */

int main(void)
{
	int i = 0;
	long int a = 0, b = 1, next;

	for (i = 0; i < 50; i++)
	{
		next = a + b;
		a = b;
		b = next;
		printf("%ld", next);

		if (i == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}

	return (0);
}
