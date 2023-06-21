#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 * @array: function array
 * @size: no. of elements in array
 * @cmp: pointer that compares
 * Return: index of first element in success
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
