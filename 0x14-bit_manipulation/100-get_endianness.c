#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int y;
	char *c;

	x = 1;
	c = (char *) &y;

	return ((int)*c);
}
