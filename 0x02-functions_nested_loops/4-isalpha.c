#include "main.h"
#define TRUE 1
#define FALSE 0
/**
 * _isalpha - checks for alphabetic characters
 * @c: character to be ch3cked
 * Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (TRUE);

	return (FALSE);
}
