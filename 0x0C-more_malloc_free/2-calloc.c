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

	/*reserve memory spaces in heap*/
	ptr = calloc(nmemb, size);

	/*check that calloc doesnt fail*/
	if (ptr == NULL)
		return (NULL);

	/*verify that input parameters are not NULL*/
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
