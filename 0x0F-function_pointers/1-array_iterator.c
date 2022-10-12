#include "funtion_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - array iterator
 * @array: array
 * @size: size
 * @action: pointers to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
