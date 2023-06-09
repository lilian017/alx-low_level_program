#include "main.h"
#include <string.h>

/**
 * _strcopy functn
 * Return: 0
 */

char *_strcpy(char *dest,char *src)
{
	char *temp = dest;
	while ((*temp++ = *src++));
	return dest;
}
