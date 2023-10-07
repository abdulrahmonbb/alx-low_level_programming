#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 * @s1: 1st string
 * @s2: 2nd string
 * @n: first n bytes to be copied
 *
 * Return: pointer to newly allocated space in memory holding the concatenate
 * d string.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *res;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	res = (char *)malloc(len1 + n + 1);
	if (res == NULL)
	{
		return (NULL);
	}
	if (n >= len2)
	{
		n = len2;
	}

	strcpy(res, s1);
	strncat(res, s2, n);

	return (res);
}
