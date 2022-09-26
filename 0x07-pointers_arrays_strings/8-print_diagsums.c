#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum
 * @a: value
 * @size: size
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	int sum1 = 0;
	int sum2 = 0;

	i = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[(size * i) + i];
		sum += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
