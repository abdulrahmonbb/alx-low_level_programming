#include <stdio.h>

/**
 * main - prints its name
 * @argc: argument count
 * @argv: array of command line arguments
 *
 * Return: Alwaysb0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
