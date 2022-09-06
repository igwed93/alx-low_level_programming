#include "main.h"
#include <string.h>

/**
 * _strchr - funtion that locates a character in a string
 * @s: string to be scanned
 * @c: character to be scanned for
 *
 * Return: pointer to first occurence of char c
 * or NULL if char not found
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
