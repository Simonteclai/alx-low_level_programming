#include "search_algos.h"

/**
 * bin_search - makes binary search on given array
 * @array: the array
 * @first: first index of the array
 * @last: last index of the array
 * @value: value to be searched
 * Return: index or -1
 */

int bin_search(int *array, size_t first, size_t last, int value)
{
	size_t mid;
	int x;

	if (first > last)
		return (-1);
	printf("Searching in array: ");
	for (mid = first; mid <= last; mid++)
	{
		if (mid != first)
			printf(", ");
		printf("%d", array[mid]);
	}
	printf("\n");
	mid = (first + last) / 2;
	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		x = bin_search(array, first, mid - 1, value);
	else if (value > array[mid])
		x = bin_search(array, mid + 1, last, value);
	return (x);
}

/**
 * exponential_search - function searches for value
 * in sorted array of integers using exponential search algorithm
 * @array: the array
 * @size: size of the array
 * @value: value to be searched
 * Return: index or -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, first, last;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	for (i = 1; i < size && array[i] <= value; i *= 2)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	first = i / 2;
	last = i;
	if (i >= size)
		last = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", first, last);
	return (bin_search(array, first, last, value));
}
