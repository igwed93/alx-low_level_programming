#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: thenumber of arguments passed to the function
 * @...: variadic parameters
 *
 * Description: sum_them_all is a variadic funtion that gets the sum
 * of its named and unnamed arguments.
 *
 * Return: Always 0 (success).
 * Author: Daniel Igwe.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
