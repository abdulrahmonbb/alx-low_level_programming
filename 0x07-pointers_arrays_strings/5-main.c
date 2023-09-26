#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "Hello, World";
	char *f = "World";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);
	return (0);
}
