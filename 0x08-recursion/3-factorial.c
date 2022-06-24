#include "main.h"

/**
 * factorial - function that returns the factorial of an int.
 * @n: any given positive integer
 *
 * Return: the factorial of int n.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
