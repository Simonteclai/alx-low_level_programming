#include "lists.h"

/**
 * reverse_listint - reverses the list
 * @head: input singly linked list
 * Return: val
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;

	if (*head == NULL)
	{
		return (NULL);
	}
	if ((*head)->next == NULL)
	{
		return (*head);
	}
	while (*head != NULL)
	{
		listint_t *next;

		next = (*head)->next;
		(*head)->next = current;
		current = *head;
		*head = next;
	}
	*head = current;
	return (*head);
}
