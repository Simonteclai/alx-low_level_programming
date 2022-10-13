#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separator
 * @n: number of string elements
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	char *c;

	va_start(ls, n);
	for (i = 0; i < n; i++)
	{
		c = va_arg(ls, char *);

		if (c)
			printf("%s", c);
		else
			printf("(nil)");
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ls);
}
