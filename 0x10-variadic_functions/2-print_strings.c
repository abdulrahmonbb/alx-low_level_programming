#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints a string
 * @separator: argument separator
 * @n: number of variable arguments
 *
 * Return: voids
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *value;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		value = va_arg(list, char*);

		if (value == NULL)
			printf("(nil)");

		else
		{
			printf("%s", value);
			if (separator != NULL && i < n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
