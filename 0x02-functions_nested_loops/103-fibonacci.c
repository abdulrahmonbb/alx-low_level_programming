#include <stdio.h>

/**
 * main - prints the sum of the even-valued terms
 * Return: Always 0
 */

int main(void)
{
	unsigned long i, a, b, next, sum = 0;

	i = a = 0;
	b = 1;

	while (i < 50)
	{
		next = a + b;
		a = b;
		b = next;

		if (next < 4000000 && (next / 2) == 0)
		{
			sum += next;
		}
		i++;
	}

	printf("%lu\n", sum);
	return (0);
}
