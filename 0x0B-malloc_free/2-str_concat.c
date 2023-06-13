#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat- function that concatenates two strings
 * @s1: contents of string s1
 * @s2: contents of string s2
 * Return: pointer to new space memory or NULL on fail
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, ln1, ln2, ln;
	char *result;

	ln1 = ln2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while  (s1[i++] != '\0')
			ln1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			ln2++;
	}

	ln = ln1 + ln2;
	result = (char *)malloc(sizeof(char) * (ln + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < ln1; i++)
		result[i] = s1[i];
	for (j = 0; j < ln2; j++, i++)
		result[i] = s2[j];
	result[ln] = '\0';

	return (result);
}
