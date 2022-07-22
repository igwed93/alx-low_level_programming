#include "main.h"

/**
 * flip_bits - function that changes a number
 * @n: number
 * @m: resulting number
 *
 * Return: number of bits you will need to flip to get from one number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0, flips = 0;

	diff = n ^ m;

	while (diff)
	{
		if (diff & 1)
			flips++;
		diff = diff >> 1;
	}
	return (flips);
}
