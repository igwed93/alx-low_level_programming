#include "main.h"
#include <string.h>

/**
 * _strspn - function that gets the lenght of a prefix substring
 * @s: string to be scanned
 * @accept: string containing characters to be scanned for
 *
 * Return: length of prefix string.
 */
unsigned int _strspn(char *s, char *accept)
{
	int len, i;

	len = 0;

	while (*s != '\0')
	{
		if (*s != 32)
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (*s == accept[i])
				{
					len += 1;
				}
			}
		}
		else
		{
			return (len);
		}
		s++;
	}

	return (len);
}
