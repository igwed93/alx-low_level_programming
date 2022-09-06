#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strcmp - compares two strings and returns an int
 * @s1: parameter
 * @s2: parameter
 *
 * Return: returns an int on success
 */
int _strcmp(char *s1, char *s2)
{
	int L;

	L = strcmp(s1, s2);
	return (L);
}

