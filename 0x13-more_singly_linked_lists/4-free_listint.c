#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees listint_t list
 * @head: first node of the list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
