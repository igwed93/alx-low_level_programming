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

	/*verify that input parameters are not NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	/*reserve memory spaces in heap*/
	ptr = calloc(nmemb, size);

	/*verify that malloc doesnt fail*/
	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
