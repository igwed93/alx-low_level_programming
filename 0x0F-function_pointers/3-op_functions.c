#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - function that computes addition operation
 * @a: integer
 * @b: integer
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that computes subtraction operation
 * @a: integer
 * @b: integer
 *
 * Return: the subtraction of b from a
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that computes multiplication
 * @a: integer
 * @b: integer
 *
 * Return: the multiplication of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that computes division operation
 * @a: integer
 * @b: integer
 *
 * Return: the division of a by b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function that computes the modular operation
 * @a: integer
 * @b: integer
 *
 * Return: a modulo b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
