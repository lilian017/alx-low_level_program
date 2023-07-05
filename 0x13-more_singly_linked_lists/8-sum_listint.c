#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - function that sums all data of listint_t
 * @head: first node
 * Return: sum or 0
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
