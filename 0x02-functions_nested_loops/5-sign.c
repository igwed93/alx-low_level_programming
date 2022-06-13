#include "main.h"

/**
 * print_sign - prints the sign of a given number.
 * @n: the number to be tested.
 *
 * Return: 1 if n is > 0 and 0 if n = 0 and -1 if otherwise.
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	else if (n < 0)
	{
		return (-1);
		_puthcar('-');
	}
	_putchar('\n');
}
