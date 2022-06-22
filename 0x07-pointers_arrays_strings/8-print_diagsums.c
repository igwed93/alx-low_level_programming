#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_diagsums - function that prints the sum of the two diagonals of a square matrix of integers
 * @a: square matrix
 * @size: size of square matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, n, d1, d2;

	i = 0;
	j = size - 1;
	d1 = 0;
	d2 = 0;
	n = size * size;

	while (i <= n)
	{
		d1 = d1 + a[i];
		i = i + size + 1;
	}

	while (j < n - 1)
	{
		d2 += a[j];
		j = j + size - 1;
	}

	printf("%d, %d\n", d1, d2);
}
