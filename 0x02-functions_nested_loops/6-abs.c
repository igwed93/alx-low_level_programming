#include "main.h"

/**
 * _abs - computes the absolute value of any given integer
 *@n: the integer that is computed
 * Return: the computed absolute value is returned.
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		return (n);
	}
	else if (n >= 0)
	{
		n = n;
	}
		return (n);
}
