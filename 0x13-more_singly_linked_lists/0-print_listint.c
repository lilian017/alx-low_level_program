#include "lists.h"
#include <stdio.h>

/**
 * print_listint - a function that prints all listint_t list elements
 * @h: head of node
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
