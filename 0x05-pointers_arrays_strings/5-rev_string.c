#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverses a string
 * @s: the string to be reversed
 */
void rev_string(char *s)
{
	char mychar;
	int i = strlen(s);
	int j = 0;

	while (j < i)
	{
		i--;
		mychar = s[j];
		s[j] = s[i];
		s[i] = mychar;
		j += 1;
	}
}
