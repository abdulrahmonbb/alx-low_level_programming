#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2-dimensional array of integers
 * @width: columns
 * @height: rows
 *
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **matrix;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = (int **)malloc(height * sizeof(int *));
	if (matrix == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < height; i++)
	{
		matrix[i] = (int *)malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			return (NULL);
		}
	}
	
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}

	for (i = 0; i < height; i++)
	{
		free(matrix[i]);
	}
	free(matrix);
	return (matrix);
}


