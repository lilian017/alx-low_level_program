#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *z;
	int i, range;

	if (min > max)
		return (NULL);

	range = max - min + 1;

	z = malloc(sizeof(int) * range);

	if (z == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		z[i] = min++;

	return (z);
}
