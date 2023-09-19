#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: charcter string
 * Return: void
 */
void puts2(char *str)
{
	int length = 0, i;

	while (*str != '\0')
	{
		length++;
	}
	for (i = 0; i < length; i++)
	{
		if (i / 2 != 0)
			continue;
		else
			_putchar(str[i]);
	}
}
