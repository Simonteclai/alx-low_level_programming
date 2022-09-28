#include "main.h"

/**
 * _sqr - find sqr
 * @i: num
 * @n: num
 * Return: val
 */
int _sqr(int i, int n)
{
	if (n < 0)
		return (-1);
	else if (i * i == n)
		return (i);/
	else if (i * i < n)
	{
		return (_sqr(i + 1, n));
	}
	return (-1);
}

/**
 * _sqrt_recursion - finds the squar root
 * @n: the number
 * Return: val or -1
 */

int _sqrt_recursion(int n)
{
	int i = 0;

	if (i < 0)
	{
		return (-1);
	}
	else
		return (_sqr(i, n));
}
