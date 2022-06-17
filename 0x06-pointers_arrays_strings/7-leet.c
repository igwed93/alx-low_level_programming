#include "main.h"
#include <stdio.h>

/**
 * leet - function that encodes a string into 1337
 * @s: string to be modified
 *
 * Return: returns a pointer to the string s.
 */
char *leet(char *s)
{
	char A, E, O, T, L;
	char a, e, o, t, l;
	int i;

	a = A = '4';
	e = E = '3';
	o = O = '0';
	t = T = '7';
	l = L = '1';
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = a;
		} else if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = e;
		} else if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = o;
		} else if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = t;
		} else if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = l;
		}
	}
	return (s);
}




