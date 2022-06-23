#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - functionn that prints a string followed by a newline
 * @s: string to be printed
 *
 */
void _puts_recursion(char *s)
{
	int i = 0;
	
	if (s[i] != '\0')
	{
		_putchar(s[i]);
		s++;
		_puts_recursion(s);
	}

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

}
