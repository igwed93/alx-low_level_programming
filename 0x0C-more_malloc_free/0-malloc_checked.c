#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - function that allocates a memory using malloc
 * @b: size of memory to allocate
 *
 * Return: returns a pointer to the memory.
 */
void *malloc_checked(unsigned int b)
{
	int *m; /*Declare pointer to be used*/

	m = malloc(b); /*reserve memory spaces in heap*/

	if (m == NULL) /*if malloc fails*/
	{
		free(m);
		exit(98); /*Terminate process with 98 as return value*/
	}
	return (m);

}
