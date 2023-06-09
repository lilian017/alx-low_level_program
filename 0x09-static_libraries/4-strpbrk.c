#include "main.h"

/** 
 * _strpbrk function accept, s
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (strchr(accept, *s) != NULL)
		{
			return s;
		}
		s++;
	}
	return NULL;
}
