#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator
 * @n: number of variable arguments
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	int value;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, int);
		if (separator != NULL)
			printf("%d%s", value, separator);

		if (i == n - 1)
			printf("%d", value);
	}
	va_end(list);
	printf("\n");
}
