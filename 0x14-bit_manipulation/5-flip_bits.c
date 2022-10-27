#include "main.h"

/**
 * flip_bits - flips bits
 * @n: value one
 * @m: value two
 * Return: val
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, nb = 0;

	while (xor > 0)
	{
		nb += (xor & 1);
		xor >>= 1;
	}
	return (nb);
}
