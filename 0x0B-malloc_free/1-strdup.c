#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: string
 *
 * Return: Always 0
 */
char *_strdup(char *str)
{
	int length;
	char *duplicate;

	if (str == NULL)
	{
		return (NULL);
	}

	length = strlen(str);
	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}

