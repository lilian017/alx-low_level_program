#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns number of bits needed to flip num
 * @n: ...
 * @m: ..
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int difference, result;
	unsigned int i, l;

	l = 0;
	result = 1;
	difference = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (result == (difference & result))
			l++;
		result <<= 1;
	}

	return (l);
}
