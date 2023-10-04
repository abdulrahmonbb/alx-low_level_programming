#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * main - Check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);
	return (0);
}
