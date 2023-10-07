#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array of nmemb elements of size bytes
 * each and returns a pointer to the allocated memory.
 * @nmemb: number of array elements
 * @size: size of each array element
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	size_t totalSize;

	if ((nmemb == 0) || (size == 0))
	{
		return (NULL);
	}

	totalSize = nmemb * size;
	arr = malloc(totalSize);
	if (arr == NULL)
	{
		return (NULL);
	}
	else
		memset(arr, 0, totalSize);

	return (arr);
}
