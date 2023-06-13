#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that points to newly allocated memory space
 * contains copy of the string given as the parameter
 * @str: pointer string
 * @char: character string
 * Return: pointer to new string that is a duplicate of str
 * NULL if str is NULL
 */
char *_strdup(char *str)
{
	char *copy;
	int i, ln = 0;

	if ( str == NULL)
		return (NULL);

	while (str[ln] != '\0')
		ln++;

	copy = (char *)malloc((sizeof(char) * ln) + 1);
	if (copy == NULL)
		return (NULL);

	for (i =0; i< ln; i++)
		copy[i] =str [i];
	copy[ln] = '\0';

	return (copy);
}
