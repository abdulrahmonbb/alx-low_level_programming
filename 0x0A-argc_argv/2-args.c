#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: command line arguments
 * @argv: array name
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
