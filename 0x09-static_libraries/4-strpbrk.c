#include "main.h"
#include <stdlib.h>

/**
 * _strpbrk - is a function that searches a string for any of a set of bytes
 * @s: pointer to the string to be searched
 * @accept: string containing byte to bee sought for
 *
 * Return:  pointer to the byte in s that matches one of the bytes in accept,
 * else NULL.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return ('\0');
}
