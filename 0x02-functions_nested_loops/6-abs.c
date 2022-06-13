#include "main.h"

/**
 * _abs - computes the absolute value of any given integer
 *@n: the integer that is computed
 * Return: always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar(n);
	}
	else if (n >= 0)
	{
		putchar(n);
	}
}
