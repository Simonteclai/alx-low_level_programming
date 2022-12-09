#include "lists.h"

/**
 * free_dlistint - free
 * @head: head of list
 * Return: val
 */

void free_dlistint(dlistint_t *head)
{

	dlistint_t *tmp;

	while (head != NULL)
	{

		tmp = head;

		head = head->next;

		free(tmp);
	}
}
