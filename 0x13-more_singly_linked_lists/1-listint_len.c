#include "lists.h"

/**
 * listint_len - number of elementsin a singly linked list
 * @h: pointer to head
 * Return: val
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}
	return (node);
}
