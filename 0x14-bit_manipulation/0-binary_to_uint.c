#include "main.h"

int _pow(int base, int p);
/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: binary to be converted
 *
 * Return: the converted number or 0 if b contains a non-int char
 * or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	/* declare variables to be used */
	unsigned int dec = 0;
	int index_v = 0;
	int i = 0, j = 0;

	if (b == NULL)
		return (0);

	/* determine the amount of digits in b */
	while (b[i])
	{
		j++;
		i++;
	}
	index_v = j - 1;

	/* here is where the actual conversion happens */
	i = 0;
	while (b[i]) /* for each char of b */
	{
		/* verify that b contains only zeros and ones */
		if (b[i] == '0' || b[i] == '1')
		{
			/*multiply the char by 2 raised to the power*/
			/*of the number of characters in b */
			dec = dec + ((b[i] - '0') * _pow(2, index_v));
			index_v--;
			i++;
		}
		else
		{
			return (0);
		}
	}

	return (dec);
}

/**
 * _pow - function that raises a base to a power
 * @base: integer to be raised
 * @p: power to raise base to;
 *
 * Return: the computed exponent
 */
int _pow(int base, int p)
{
	int result = 1;

	while (p)
	{
		result = result * base;
		p--;
	}

	return (result);
}
