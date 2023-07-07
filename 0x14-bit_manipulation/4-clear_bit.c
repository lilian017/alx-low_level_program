#include "main.h"

/**
 * clear_bit -a function that sets value of a bit to 0
 * @n: ...
 * @index: set index starting from 0
 * Return: 1 on success and -1 on error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int j;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = ~(1 << index);
	*n = *n & j;

	return (1);
}
