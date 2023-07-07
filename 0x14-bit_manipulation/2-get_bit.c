#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: checks bits
 * @index: position to be checked
 * Return: vzlue of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j, num;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	j = 1 << index;
	num = n & j;
	if (num == j)
		return (1);

	return (0);
}
