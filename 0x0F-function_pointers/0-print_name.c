#include "function_pointers.h"

/**
 * print_name - prints a name;
 * @name: first argument
 * @f: function pointer
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == print_name_as_is)
	{
		print_name_as_is(name);
	}
	else
		print_name_uppercase(name);

}
