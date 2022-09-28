#include "main.h"

/**
 * is_prime_number - checks if the number is prime number
 * @n: number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n == 1 || n < 0)
	{
		return (0);
	}
	else if (n % 2 == 0 || n % 3 == 0 || n % 7 == 0 || n % 9 == 0 || n % 5 == 0)
	{
		return (0);
	}
	else
		return (1);
}
