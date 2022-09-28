#include "main.h"

/**
 * _test - tester
 * @n: the div
 * @pr: num
 * Return: val
 */
int _test(int n, int pr)
{
	if (pr == n - 1)
	{
		return (1);
	}
	else if (n % pr == 0)
	{
		return (0);
	}
	else if (n % pr != 0)
	{
		return (_test(n, pr + 1));
		return (0);
	}

/**
 * is_prime_number - checks if the number is prime number
 * @n: number to be checked
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	int pr = 2;

	if (n < 2)
		return (0);
	if (n == 2)
		return (1);
	return (_test(n, pr));
}
