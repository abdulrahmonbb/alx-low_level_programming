#include "main.h"
#define TRUE 1
#define FALSE 0

/**
 * _islower - checks for lowercase characters
 * c: character to be checked
 * Return: Always 0
 */

int _islower(int c)
{
	while (c >= 'a' && c <= 'z')
		return (TRUE);

	return (FALSE);
}
