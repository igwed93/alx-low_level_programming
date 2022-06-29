#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _strdup - function that returns a pointer
 * to a newly allocated space in memory
 * @str: string to be copied into new memory location
 *
 * Return: Null if str is null optherwise returns
 * pointer to the newly allocated space in memory.
 */
char *_strdup(char *str)
{
	unsigned int i, len;
	char *str2;

	i = 0;
	len = strlen(str);
	str2 = malloc(len * sizeof(char));

	if (str == 0 || str2 == 0)
		return (0);
	while (len--)
	{
		str2[i] = *(str + i);
		i++;
	}
	return (str2);
}
