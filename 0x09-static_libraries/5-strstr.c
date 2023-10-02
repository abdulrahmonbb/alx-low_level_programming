#include "main.h"

/**
 * _strstr -  finds the first occurrence of the substring needle in the string
 * haystack.
 * @haystack: string
 * @needle: substring
 *
 * Return: a pointer to the beginning of the substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *startofhaystack = haystack;
	char *startofneedle = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (startofhaystack);
		}
		needle = startofneedle;
		startofhaystack++;
		haystack = startofhaystack;
	}
	return (0);
}
