#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 *
 * @str: the string to be computed
 */
void puts2(char *str)
{
	int y = strlen(str);
	int i;

	for (i = 0; i < y; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
