#include "main.h"

/**
 * string_toupper - chnages all lowercase letters of a string to uppercase
 * @str: string
 * Return: uppercase string
 */
char *string_toupper(char *str)
{
	char *res = str;

	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
		{
			*str = *str - ('a' - 'A');
		}
		str++;
	}
	return (res);
}
