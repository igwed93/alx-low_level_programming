#include "main.h"
#include <string.h>

/**
 * _memset - function that fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 *
 * @s: pointer to memory area to fill
 * @b: constant byte
 * @n: the number of bytes to fill
 * Return: returns the pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
