#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}

		nodes++;
		h = h->next;
	}
	return (nodes);
}
