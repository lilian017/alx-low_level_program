#include "main.h"

/**
 * _memset function
 * @b: character
 * @n: unsigned interger n
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *temp = s;
	while (n > 0)
	{
		*temp = b;
		temp++;
		n--;
	}
	return s;
}
