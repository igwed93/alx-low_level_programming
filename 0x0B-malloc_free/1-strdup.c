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

	if (str == NULL)
		return (NULL);
	for (len = 0; str[len] != '\0'; len++) /*calculate the length of str*/
	{
		continue;
	}

	str2 = malloc(len * sizeof(char) + 1);

	if (str2 == NULL) /*Determine that malloc didn't fail*/
		return (NULL);

	for (i = 0; i < len; i++)
	{
		str2[i] = *(str + i);
	}
	str2[i] = '\0';
	return (str2);
}
