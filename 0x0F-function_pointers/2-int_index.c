#include "function_pointers.h"

/**
 * int_index - searches index
 * @array: the array
 * @size: size of array
 * @cmp: index
 * Return: val or 0 or 1 0r -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	}
	return (-1);
}
