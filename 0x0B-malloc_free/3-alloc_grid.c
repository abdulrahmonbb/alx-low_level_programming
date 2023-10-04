#include "main.h"
#include <stdlib.h>

int *rowfunc(int width);
/**
 * rowfunc - initializes array elements to 0
 * @width: number of array elements
 *
 * Return: int*
 */
int *rowfunc(int width)
{
	int *array;
	int i;

	array = (int *)malloc(sizeof(int) * width);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		array[i] = 0;
	}
	return (array);
}

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int) * (width * height));
	if (matrix == NULL)
	{
		do
		{
			free(matrix[i]);
			i++;
		} while (i < height);
		return (NULL);
	}

	while (i < height)
	{
		matrix[i] = rowfunc(width);
		i++;
	}
	return (matrix);
}
