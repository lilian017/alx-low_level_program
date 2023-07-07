#include "main.h"

/**
 * get_endianness - function that checks endianess
 * Return: void
 */

int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;

	return (*c);
}
