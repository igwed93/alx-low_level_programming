#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element of the array
 *
 * Return: a pointer to the allocated memory on success
 * otherwise if malloc fails or nmemb or size is 0 it
 * returns NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr; /*Declare a pointer to be used*/
	unsigned int i;

	/*reserve memory spaces in heap*/
	ptr = malloc(nmemb * size);

	/*check that malloc doesnt fail*/
	if (ptr == NULL)
		return (NULL);

	/*verify that input parameters are not NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*set memory to 0*/
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}
	return (ptr);
}
