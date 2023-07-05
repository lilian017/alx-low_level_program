#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that returns head node's data
 * @head: pointer to head
 * Return: 0
 */

int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	while (*head != NULL)
	{
		first = *head;
		*head = first->next;
		n = first->n;
		free(first);
	}
	return (n);
}
