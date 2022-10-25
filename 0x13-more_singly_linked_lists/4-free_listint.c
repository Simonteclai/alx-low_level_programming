#include "lists.h"

/**
 * free_listint - free nodes
 * @head: structure
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	while (head != NULL)
	{
		listint_t *tmp;

		tmp = head;
		free(tmp);
		head = head->next;
	}
}
