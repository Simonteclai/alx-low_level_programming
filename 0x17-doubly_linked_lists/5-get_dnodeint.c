#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: pointer of head
 * @index: position of index
 * Return: node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

	dlistint_t *tmp;

	unsigned int num_nodes = 0;

	tmp = head;

	while (tmp != NULL && num_nodes <= index)
	{

		if (num_nodes == index)
		return (tmp);

		tmp = tmp->next;

		num_nodes++;

	}
	return (NULL);

}
