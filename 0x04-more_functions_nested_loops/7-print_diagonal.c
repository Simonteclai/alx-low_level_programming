#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: the number of times the character is printed
 * Return: void
 */

void print_diagonal(int n)
{
	char m;

	while (m < n && n > 0)
	{
		_putchar('\');
		m++;
		_putchar('\n');
		_putchar(' ');
	}
	_putchar('\n');
}
