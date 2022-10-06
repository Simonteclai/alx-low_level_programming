#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints an intiger array
 * @min: array element
 * @max: last array element
 * Return: val or NULL
 */

int *array_range(int min, int max)
{
	int i, *n, size;

	if  (min > max)
		return (NULL);

	size = max - min + 1;

	n = malloc(sizeof(int) * size);

	if (n == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		n[i] = min++;

	return (n);
}
