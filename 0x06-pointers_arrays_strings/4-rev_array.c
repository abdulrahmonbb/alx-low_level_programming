#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: string
 * @n: number of array elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n--; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
