#include "main.h"

/**
 * flip_bits - flips bits
 * @n: value one
 * @m: value two
 * Return: val
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int nb;

	for (nb = 0; n || m; n >> 1, m >> 1)
	{
		if ((n & 1) != (m & 1))
			nb++;
	}
	return (nb);
}
