#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: character string
 * Return: void
 */
void puts_half(char *str)
{
	int length = 0;
	int start, i;

	while (str[length] != '\0')
	{
		length++;
	}

	start = (length + 1) / 2;
	for (i = start; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
