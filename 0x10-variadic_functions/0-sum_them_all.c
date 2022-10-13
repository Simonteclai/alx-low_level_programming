#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - the sum
 * @n: inital number
 * Return: val or 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, z = 0, sum;
	va_list list;

	va_start(list, n);

	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
	{
		x = va_arg(list, int);
		z += x;

		sum = (z + n);
		return (sum);
	}
	}
	va_end(list);
	return (0);
}
