#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * _strspn function prototype
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	while (*s != '\0' && strchr(accept, *s) != NULL)
	{
		count++;
		s++;
	}
	return count;
}
