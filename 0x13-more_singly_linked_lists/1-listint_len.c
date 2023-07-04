#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the no. of elmnts
 * @h: pointer to the head node
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h !=NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
