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
	L = n % 10;

	_putchar(L);
	return (L);
}
