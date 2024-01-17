#include "main.h"

/**
 * _strcpy -  copies the string pointed to by src, including '\0' to dest
 * @dest: buffer to copy string to
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *orgdest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

	return (orgdest);
}
