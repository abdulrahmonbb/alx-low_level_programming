#include "main.h"

/**
 * puts - prints a string, followed by a new line, to stdout
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str);
		str++;
	}
	putchar('\n');
}
