#include "main.h"

/**
 * is_prime_number - checks if an input value is a prime number
 * @n: given integer
 *
 * Return: 1 if its a prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	return (_is_prime(n, n - 1));
}

/**
 * _is_prime - checks for primality
 * @a: number to be checked
 * @b: integer
 *
 * Return: 1 if its a prime number, otherwise 0.
 */
int _is_prime(int a, int b)
{
	if (a <= 1)
	{
		return (0);
	}
	if (b == 1)
	{
		return (1);
	}
	if (a % b == 0)
	{
		return (0);
	}
	return (_is_prime(a, b - 1));
}
