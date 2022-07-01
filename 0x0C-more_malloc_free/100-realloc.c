#include <stdlib.h>
#include "main.h"
/**
 * _realloc - function that reallocates a memory block using
 * malloc and free
 * @ptr: previously allocated memory block
 * @old_size: size of the allocated space for ptr
 * @new_size: size of the new memory block
 *
 * Return: pointer to the reallocated memory.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	/*declare pointer to be used for memory reallocation*/
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	/*verify if there are changes to old_size*/
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL) /*verify the value of ptr*/
	{
		return (malloc(new_size));
	}
	if (new_size == 0 && ptr != NULL) /*verify the value of new_size*/
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL) /*verify that malloc did not fail*/
		return (NULL);
	old_ptr = ptr; /*Cast malloc pointer to char type by reassignment*/

	if (new_size > old_size) /*bytes from previous buffer to new buffer*/
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
