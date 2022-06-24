#include "main.h"
#include <math.h>

int check_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - function that finds the natural square root
 * of a given integer
 * @n: integer parameter
 *
 * Return: returns the natural square root of n.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (check_sqrt_recursion(n, 0));
}

/**
 * check_sqrt_recursion - recurses to find the natural
 * square root of a number
 * @n: number to calculate the square root of
 * @i: iterator
 *
 * Return: the resulting square root
 */
int check_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (check_sqrt_recursion(n, i + 1));
}
