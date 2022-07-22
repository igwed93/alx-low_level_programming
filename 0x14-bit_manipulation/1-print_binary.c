#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: number to be printed as binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bin;

	if (n >> 1)
		print_binary(n >> 1);
	/* obtain the last bit of the number */
	bin = n & 1;
	_putchar(bin + '0');
}
