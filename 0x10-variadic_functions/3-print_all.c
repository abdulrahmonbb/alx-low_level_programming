#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

/**
 * print_i - prints int
 * @list: arguement list
 * @s: separator
 *
 * Return: void
 */
void print_i(va_list, char *s)
{
	printf("%s%d", s, va_arg(list, int));
}

/**
 * print_c - prints char
 * @list: arguement list
 * @s: separator
 *
 * Return: void
 */
void print_c(va_list, char *s)
{
	printf("%s%c", s, va_arg(list, int));
}

/**
 * print_s - prints string
 * @list: arguement list
 * @s: aeparator
 *
 * Return: void
 */
void print_s(list, char *s)
{
	char *str;
	
	str = va_arg(list, char*);
	if (str == NULL)
		str = "(nil)";
	printf("%s%s", s, str);
}

/**
 * print_f - prints floats
 * @s: separator
 * @list: arguement list
 *
 * Return: void
 */
void print_f(list, char *s)
{
	printf("%s%f", s, (float) va_arg(list, double));
}

/**
 * print_all - prints out all stuff
 * @format: list of types of arguement
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep;
	int i, j;

	fm_t fm[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s},
		{NULL, NULL,}
	};

	va_start(list, format);
	i = 0;
	sep = "";
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == *(fm[j]).fm)
			{
				fm[j].p(list, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
