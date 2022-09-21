#include "main.h"

/**
 * reverse_array - this reverses the elements of an array
 * @a: the array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int start, end;

	while (start < end)
	{
		n = a[start];
		a[start] = a[end];
		a[end] = n;
		start++;
		end--;
	}
}
