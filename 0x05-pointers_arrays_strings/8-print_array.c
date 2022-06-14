#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array parameter
 * @n: integer parameter
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d\n", a[i]);
	}
}
