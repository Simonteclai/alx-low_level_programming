#include "main.h"

/**
 * _print_rev_recursion -  prints reverse of a string
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	int index, n, tem;

	tem = *s[index];
	*s[index] = *s[n - 1 - index];
	*s[n - 1 = index] = tem;
}
