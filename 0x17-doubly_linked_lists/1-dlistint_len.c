#include "lists.h"

/**
* dlistint_len - returns num of elements
* @h: head of list
* Return: num of elem
*/

size_t dlistint_len(const dlistint_t *h)

{

	size_t num = 0;



	while (h != NULL)

	{

		h = h->next;

		num++;

	}

	return (num);

}
