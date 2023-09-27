#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals in a square
 * matrix.
 * @a: pointer to integer array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int maindiag = 0;
	int secdiag = 0;

	for (i = 0; i < size; i++)
	{
		maindiag += a[i * size + i];
		secdiag += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", maindiag, secdiag);
}

