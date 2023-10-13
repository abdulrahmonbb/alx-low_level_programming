#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: arguement format
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list list;
	char *sep = ", ";
	char *str;
	int i = 0, n = 0;

	va_start(list, format);
	while (format && format[i])
		i++;

	while (format && format[n])
	{
		if (n == (i - 1))
			sep = "";

		switch (format[n])
		{
			case 'c':
				printf("%c%s", va_arg(list, int), sep);
				break;
			case 'i':
				printf("%i%s", va_arg(list, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(list, double), sep);
				break;
			case 's':
				str = va_arg(list, char *);
				if (str == NULL)
					str = "(nil)";

				printf("%s%s", str, sep);
				break;
			default:
				break;
		}
		n++;

	}
	printf("\n");
	va_end(list);
}
