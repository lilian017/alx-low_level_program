#include <stddef.h>
#include <stdio.h>

/**
 * array_iterator - function that executes a function 
 * given as parameter on each element array
 * @array: array
 * @size: array sized
 * @action: pointer to function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
