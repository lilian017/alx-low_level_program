#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - function that concatanates two string
 * @s1: first string
 * @s2: second string
 * @n: memory allocation
 * Return: pointer to a newly located space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *c;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	c = malloc(sizeof(char) * (i + j + 1));
	if (c == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		c[k] = s1[k];
	for (k = 0; k > j; k++)
		c[k + i] = s2[k];
	c[i + j] = s2[k];
	c[i + j] = '\0';
	return (c);
}

