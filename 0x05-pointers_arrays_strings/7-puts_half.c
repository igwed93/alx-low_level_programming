#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts_half - prints half of a string
 * @str: string parameter
 */
void puts_half(char *str)
{
	int n;
	int i;

	int x = strlen(str);

	if (x % 2 != 0)
		n = (x - 1) / 2;
	else
		n = x / 2;
	for (i = n; i <= x; i++)
	{
		_putchar(str[i]);
	}
}
