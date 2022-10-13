#include "variadic_functions.h"
#include<stdarg.h>

/**
 * print_numbers - prints numbers
 * @separator: to be in between numbers
 * @n: initial number
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list list;

	if (separator == NULL)
		exit;
	else
	{
	va_start(list, n);

	while (i <= n)
	{
		x = va_arg(list, unsigned int);

		_putchar(x);
		_putchar(separator);
	} i++;
	}
	va_end(list);
	_putchar('\n');
}
