#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcpy - copies the string pointed to by src, including
 * the terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: parameter
 * @src: parameter
 *
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	char *str;

	str = strcpy(dest, src);
	return (str);
}
