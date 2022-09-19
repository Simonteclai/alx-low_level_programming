#include "main.h"

/**
 * print_rev - prints reverse string
 * @s: the given string
 */

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
