#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (*argv != NULL)
	{
		for (i = 0; i < argc; i++)
			;
		printf("%d\n", i);
	}
	return (0);
}
