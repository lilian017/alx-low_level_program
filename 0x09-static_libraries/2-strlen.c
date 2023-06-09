#include "main.h"

int _strlen(char *s)
{
	int num = 0;
	while (*s !='\0')
	{
		num++;
		s++;
	}
	return num;
}
