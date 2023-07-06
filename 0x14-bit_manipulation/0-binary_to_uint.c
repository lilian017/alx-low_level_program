#include "main.h"
#include <stdio.h>


/**
 * binary_to_uint - function that converts a bonary no. to unsigned int
 * @b: points to a string of 0 and 1 chars
 * Return: converted no., 0 or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int decimal;

	decimal = 0;
	if (!b)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		decimal <<= 1;
		if (b[i] == '1')
			decimal += 1;
	}
	return (decimal);
}
