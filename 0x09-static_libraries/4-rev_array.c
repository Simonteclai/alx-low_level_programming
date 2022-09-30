#include "main.h"

/**
 * reverse_array - this reverses the elements of an array
 * @a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
