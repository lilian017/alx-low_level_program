#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets value of a bit to 1 at a given index
 * @index: set index
 * @n: ...
 * Return: 1 on success or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	*n = *n | j;

	return (1);
}
