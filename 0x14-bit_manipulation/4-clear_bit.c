#include "main.h"

/**
 * clear_bit - function that sets the value of a
 * bit to 0 at a given index
 * @n: number
 * @index: position of bit sequence to set to 0
 *
 * Return: 1 if it worked or -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t_binary, mask;

	t_binary  = (sizeof(*(n)) * 8);
	mask  = ~(1 << index);

	if (index < t_binary)
	{
		*(n) = mask & *(n);
		return (1);
	}

	return (-1);
}
