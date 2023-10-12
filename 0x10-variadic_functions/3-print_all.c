#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: format of character to be printed
 *
 * Return: void;
 */
void print_all(const char * const format, ...)
{
	va_list args;
	char *separator = "";
	char *str;
	int i = 0;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%i", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, (float) va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("%s(nil)", separator);
				}
				else
				{
					printf("%s%s", separator, str);
				}
				break;
			default:
				break;
		}
		separator = ", ";
		i++;
	}
	printf("\n");
	va_end(args);
}

