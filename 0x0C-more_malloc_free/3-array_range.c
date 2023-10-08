#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: min range value
 * @max: max range value
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int len, i = 0;

	if (min > max)
		return (NULL);

	len = max - min;
	arr = (int *)malloc((len + 1) * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
