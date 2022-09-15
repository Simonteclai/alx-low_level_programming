#include "main.h"

/**
 * print_diagonal - Prints a diagonal line
 * @n: the number of times the character is printed
 * Return: void
 */

void print_diagonal(int n)
{
	int m, l;

	while (m < n && n > 0)
	{
		l = 0;
		while (l < m)
		{
			_putchar(' ');
			l++;
		}
		_putchar('\\');
		_putchar('\n');
		m++;
	}
	if (m == 0)
		_putchar('\n');
}
