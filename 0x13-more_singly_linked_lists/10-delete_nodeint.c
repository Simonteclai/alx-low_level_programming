#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index
 * @head: linked list
 * @index: node index
 * Return: 1 or -1
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *actual = *head;
	listint_t *node;

	if (!*head)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(actual);
		return (1);
	}
	while (actual)
	{
		if (i == index - 1)
		{
			node = actual->next;
			actual->next = node->next;
			free(node);
			return (1);
		}
		actual = actual->next;
		i++;
	}
	return (-1);
}
