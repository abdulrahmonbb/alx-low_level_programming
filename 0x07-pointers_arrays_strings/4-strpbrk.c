#include "main.h"

/**
 * _strpbrk - locates the first occurrence on the string s of any of
 * any of the bytes in the string accept.
 * @s: string
 * @accept: substring
 *
 * Return: a pointer to the byte in s that matches one of the bytes
 * in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;
	char *b;

	for (a = s; *a != '\0'; a++)
	{
		for (b = accept; *b != '\0'; b++)
		{
			if (*a == *b)
			{
				return ((char*)a);
			}
		}
	}
	return (NULL);
}
