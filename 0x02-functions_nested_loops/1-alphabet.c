#include "main.h"

/**
 * print_alphabet() - prints the lower case alphabets from a - z
 *
 * Return: void 
 */
int _putchar(char);

void print_alphabet(void)
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
