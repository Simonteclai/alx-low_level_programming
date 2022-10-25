#include "lists.h"

/**
 * sum_listint - sum of the list
 * @head: linked list
 * Return: val
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
