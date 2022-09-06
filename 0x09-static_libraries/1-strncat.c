#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings without terminating the null byte
 * @dest: paramter
 * @src: parameter
 * @n: paramter
 *
 * Return: pointer to the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
