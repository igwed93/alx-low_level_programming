#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - a function that concatenates two strings
 * @s1: string literal
 * @s2: string literal
 *
 * Return: returns NULL on failure otherwise
 * pointer to the concatenated string is returned.
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, k, m, len;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++) /*calculate length of s1*/
	{
		continue;
	}

	for (j = 0; s2[j] != '\0'; j++) /*calculate the length of s2*/
	{
		continue;
	}

	len = i + j;
	s3 = malloc(len * sizeof(char) + 1);
	if (s3 == NULL) /*Confirm malloc didn't fail*/
		return (NULL);

	for (k = 0; k < i; k++)
	{
		s3[k] = s1[k];
	}

	for (m = 0; m < j; m++)
	{
		s3[k++] = s2[m];
	}
	s3[k++] = '\0';

	return (s3);
}
