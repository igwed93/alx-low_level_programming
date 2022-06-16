#include "main.h"
#include <stdio.h>

/**
 * string_toupper - a function that changes all lowercase letter of a string
 * to uppercase
 * @a: string parameter
 *
 * Return: returns a string of type char
 */
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
