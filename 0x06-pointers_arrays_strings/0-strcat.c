#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two string
 * @dest: string to append to
 * @src: string to be appended
 * Return: pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	char *res = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	
	*dest = '\0';

	return res;
}

