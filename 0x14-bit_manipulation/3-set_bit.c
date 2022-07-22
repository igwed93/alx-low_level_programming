#include "main.h"

/**
 * set_bit - function that sets the value of
 * a bit to 1 at a given index
 * @n: pointer to bit sequence
 * @index: index of bit to set to 1
 *
 * Return: 1 if successful or -1 if it failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t_binary, mask;

	t_binary = (sizeof(*(n)) * 8);
	mask = (1 << index);

	if (index < t_binary)
	{
		*(n) = mask || *(n);
		return (1);
	}
	return (-1);
}
