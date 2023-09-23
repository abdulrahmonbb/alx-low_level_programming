#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i, j;
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (str[i] == s1[i])
			{
				str[i] = s2[i];
				break;
			}
		}
	}
	return (str);
}
