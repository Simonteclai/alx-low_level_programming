#include "main.h"

/**
 * set_bit - sets to 1 at an index
 * @n: pointer to a string
 * @index: the given index
 * Return: val
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int s;

	if (index > 63)
		return (-1);

	s = 1 << index;
	*n = (*n | s);

	return (1);
}
