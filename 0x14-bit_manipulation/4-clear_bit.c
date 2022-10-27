#include "main.h"

/**
 * clear_bit - sets 0 at an index
 * @n: pointer
 * @index: the index
 * Return: val
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;

	if (*n & s)
		*n ^= s;
	return (1);
}

