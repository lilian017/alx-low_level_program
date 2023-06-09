#include "main.h"

/**_atoi function
 *
 *
 * Return:0
 */
int _atoi(char *s)
{
	int sig =1;
	int res =0;
	if (*s == '-')
	{
		sig = -1;
		s++;
	}
	while (*s != '\0')
	{
		res = res * 10 + (*s -'0');
		s++;
	}
	return sig * res;
}
