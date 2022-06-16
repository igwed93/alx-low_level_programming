#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strncpy - copies the string src into dest without the terminating nullbyte
 * @dest: parameter
 * @src: paramter
 * @n: size parameter
 *
 * Return: a pointer pointing to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
