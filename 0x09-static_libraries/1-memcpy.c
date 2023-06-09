#include "main.h"
#include <string.h>

/**
 * _memcpy function copies
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *temp_dest = dest;
	char *temp_src = src;
	while (n > 0)
	{
		*temp_dest =*temp_src;
		temp_dest++;
		temp_src++;
		n--;
	}
	return dest;
}
