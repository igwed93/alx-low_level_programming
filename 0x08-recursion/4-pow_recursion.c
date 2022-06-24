#include "main.h"

/**
 * _pow_recursion - function that returns the power
 * of x raised to the power of y
 * @x: integer
 * @y: power integer
 *
 * Return: an int of x raised to poweer of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
