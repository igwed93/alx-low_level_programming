#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the integer whose last digit is printed
 *
 * Return: always 0 (Success)
 */
int print_last_digit(int n)
{
	int L = n % 10;

	_putchar(L);
	return (0);
}
