#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 *
 * @n: number of array elements to be printed
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d", *(a + n));
		}
		else
		{
			printf("%d, ", *(a + n));
		}
		i++;
	}
}
