#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two string
 * @dest: string to be appended to
 * @src: string to be appended
 * @n: index of string to be copied
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	
	*dest = '\0';

	return (res);
}

