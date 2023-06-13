#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function that creates an array of chars
 *the function also initializes with specific char
 *@size: array size
 *@c: initialized value
 *Return: NULL if failure or pointer
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);

	array = (char *)malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
