#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the given number in an array
 * @a: array ints
 * @n: the number of elements
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			continue;
		printf(", ");
	}
	printf("\n");
}
