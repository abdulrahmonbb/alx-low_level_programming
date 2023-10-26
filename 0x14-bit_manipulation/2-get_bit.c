#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to be evaluated
 * @index: index of the bit to be returned
 * Return: value of the bit at index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	mask <<= index;
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if ((n & mask) == 0)
		return (0);
	else
		return (1);
}
