#include <stdlib.h>
#include "main.h"

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element of the array
 *
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	/*Declare a pointer to be used*/
	char *ptr;
	unsigned int i;

	/*verify that input parameters are not NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*reserve memory spaces in heap*/
	ptr = malloc(nmemb * size);

	/*verify that malloc doesnt fail*/
	if (ptr == NULL)
		return (NULL);

	/*fill memory with 0*/
	for (i = 0; i < (size * nmemb); i++)
	{
		ptr[i] = 0;
	}

	return (ptr);
}
