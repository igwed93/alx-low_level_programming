#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - a function that creates a two
 * dimensional array
 * @width: number of columns
 * @height: number of rows
 *
 * Return: NULL on failure otherwise returns
 * a pointer to the created array.
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(height * sizeof(int));

	if (arr == 0) /*determine that malloc did not fail*/
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
	}

	/*intialize all elements of the array to zero*/
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
