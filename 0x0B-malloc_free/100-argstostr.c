#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	int len, pos, arg_len, i;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	len = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			len += strlen(av[i]) + 1;
		}
	}

	str = malloc(len + 1);
	if (!str)
		return (NULL);

	pos = 0;
	for (i = 0; i < ac; i++)
	{
		if (av[i])
		{
			arg_len = strlen(av[i]);
			memcpy(str + pos, av[i], arg_len);
			pos += arg_len;
			str[pos++] = '\n';
		}
	}

	str[len] = '\0';
	return (str);
}
