#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be modified
 *
 * Return: returns a pointer to the string s
 */
char *cap_string(char *s)
{
	int i, j;

	char spr[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		for (j = 0; j < 13; j++)
		{
			if (s[i] == spr[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
