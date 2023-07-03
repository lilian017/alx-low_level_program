#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * size_t - prints all elements of a list_t
 * @list_t: struct def
 * @h: pointer to the list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int nodes = 0;
	
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
	return (nodes);
}
