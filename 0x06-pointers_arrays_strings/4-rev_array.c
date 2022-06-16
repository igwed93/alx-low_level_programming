#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_array - reverses the content of an array 
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i, j, b;

	j = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[j];
		a[j--] = b;
	}
}


