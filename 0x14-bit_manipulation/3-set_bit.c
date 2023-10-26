#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be set
 * Return: 1 if it worked, or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = (*n | mask);
	return (1);
}
