#include "main.h"
#include <math.h>
#include <ctype.h>
/**
 * print_last_digit - prints last digits
 * @n: given number
 * Return: the value itself
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
		last *= -1;
	_putchar(last + '0');
	return (last);
}
