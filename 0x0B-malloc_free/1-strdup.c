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
	int length, i;
	char *s;

	length = strlen(str);
	s = (char *)malloc(length * sizeof(char));
	for (i = 0; i < length; i++)
	{
		s[i] = str[i];
	}
	
	if (str == NULL)
	{
		return (NULL);
	}
	else
		return (s);
}
