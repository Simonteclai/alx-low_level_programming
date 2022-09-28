#include "main.h"

/**
 * _sqrt_recursion - finds the squar root
 * @n: the number
 * Return: val or -1
 */

int _sqrt_recursion(int n)
{
	if (n > 0)
	{
		return (n ^ (1 / 2));
	}
	else
		return (-1);
}
