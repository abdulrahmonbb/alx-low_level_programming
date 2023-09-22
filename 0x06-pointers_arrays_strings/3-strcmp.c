#include "main.h"

/**
 * _strcmp - compares tow strings
 * @s1: first string
 * @s2: second string
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	char first[], second[];

	while (*s1 != '\0')
	{
		first = *s1++;
	}
	while (*s2 != '\0')
	{
		second = *s2++;
	}

	if (first == second)
	{
		return (0);
	}
	else
		return (-1);
}
		
