#include "lists.h"

/**
 * listint_len -number of elements
 * @h: structure
 * Return: val
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
