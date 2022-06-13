#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer whose last digit is printed
 *
 * Return: returns the last digit of the number
 */
int print_last_digit(int n)
{
	int L;

	if (n < 0)
		n = -n;

	L = n % 10;

	if (L < 0)
		L = -L;

	_putchar(L + '0');
	return (L);
}
