#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the list
 * @head: the head of the list
 * @n: constant integer
 * Return: address to new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *addednode;
	listint_t *temp;
	
	if (head == NULL)
		return (NULL);

	addednode = malloc(sizeof(listint_t));
	if (addednode == NULL)
		return NULL;
	addednode->n = n;
	addednode->next = NULL;
	if (*head == NULL)
	{
	*head = addednode;
		return (addednode);
	}
	temp = *head;

		while(temp->next != NULL)
		{
			temp = temp-> next;
		}
		temp->next = addednode;
	return (addednode);
}
