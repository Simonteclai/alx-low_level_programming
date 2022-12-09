#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a new node at a position
 * @h: pointer of head
 * @idx: index position for a new node
 * @n: integer value of node * Return: adress of new node else NULL
 * Return: ret val
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new = NULL;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{

		tmp = tmp->next;

		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)

		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
