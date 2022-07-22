#include "main.h"

/**
 * get_bit - a function that returns the 
 * value of a bit at a given index
 * @n: bit sequence
 * @index: the index of the bit to return
 *
 * Return: value of the bit at index or -1
 * if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int d_binary;

	d_binary = (sizeof(n) * 8);
	if (index < d_binary)
 	{
		return (((1 << index) & n) >> index);
	}
	return (-1);
}
