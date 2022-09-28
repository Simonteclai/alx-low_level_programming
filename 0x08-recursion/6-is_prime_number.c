#include "main.h"

/**
 * is_prime_number - checks for prime numbers
 * @n: number to be checked
 */

int is_prime_number(int n)
{
	if ((n % 2) > 0)
		return (1);
	else
		return (0);
}
