#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer
 *
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - makes possible to evaluate from 1 to n
 * @a: same number as n
 * @b: iterates from 1 to n
 *
 * Return: On success 1. on error -1 is returned.
 */
int _sqrt(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return _sqrt(a, b + 1);
}
