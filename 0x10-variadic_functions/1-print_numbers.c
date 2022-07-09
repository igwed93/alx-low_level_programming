#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - function that print numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of arguements to the function
 *
 * Return: nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num;
	unsigned int i;

	va_start(num, n);

	for (i = 0; i < n; i++)
	{
		if (separator && i < n - 1)
		{
			printf("%d%s", (va_arg(num, int)), separator);
		}
		else if (separator && i >= n - 1)
		{
			printf("%d\n", (va_arg(num, int)));
		}
	}
	va_end(num);
}
