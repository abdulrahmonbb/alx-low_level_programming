#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: command line arguments
 * @argv: array name
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i < 3; i++)
		{
			sum *= atoi(argv[i]);
		}
		printf("%d\n", sum);
	}
	return (0);
}
