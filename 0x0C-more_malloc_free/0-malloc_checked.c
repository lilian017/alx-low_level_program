#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/** malloc-checked - function that allocates memory using malloc
 * @b: the memory allocated
 * Return: pointer to all memory
 */

void *malloc_checked(unsigned int b)
{
	void *t;

	t = malloc(sizeof(b));

	if (t == NULL)
		exit(98);
	return (t);
}
