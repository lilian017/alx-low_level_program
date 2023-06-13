#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a pointer to two dimensional arrays
 *@width:dimension 1
 *@height: dimension 2
 *Return: NULL on failure or 2 dimen array
 */


int **alloc_grid(int width, int height)
{
	int **alloc, i, j;
	int ln = width * height;

	if (ln <= 0)
		return (NULL);

	alloc = (int **)malloc(sizeof(int *) * height);
	if (alloc == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		alloc[i] = (int *)malloc(sizeof(int) * width);
		if (alloc[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(alloc[i]);
			free(alloc);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			alloc[i][j] = 0;

	return (alloc);
}
