#include "main.h"
#include <stdlib.h>

/**
 * _calloc - array memory alloc
 * @nmemb: number of array elements
 * @size: size of elements
 * Return: val or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *i;
	char *fill;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = malloc(size * nmemb);

	if (i == NULL)
		return (NULL);

	fill = i;

	for (index = 0; index < (size * nmemb); index++)
		fill[index] = '\0';
	return (i);
}
