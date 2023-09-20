#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a source string to a destination
 * @dest: destination string
 * @src: source string
 * Return: a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *org = dest;

	while (*str != '\0' && n > 0)
	{
		*dest++ = *src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		n--;
	}

	return (org);
}
