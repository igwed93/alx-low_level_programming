#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array
 * of characters
 * @size: size of the array
 * @c: character to be put in array
 *
 * Return: returns Null if size is 0 or the function
 * fails. Otherwise it returns a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	if (size == 0)
		return (NULL);
	ar = malloc(size * sizeof(char));

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	if (!ar)
		return (NULL);
	return (ar);
}
