#include "main.h"

/**
 * _atoi - convert a string to integer
 * @s: string
 * Return: 0
 */
int _atoi(char *s)
{
	int i;
	int res = 0;
	int brk = 0;
	int sig = -1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sig *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			res *= 10;
			res -= (s[i] - '0');
			brk = 1;
		}
		else if (brk == 1)
			break;
	}
	res *= sig;
	return (res);
}
