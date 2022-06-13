#include "main.h"

/**
 * jack_bauer - prints every minute of the day of jack starting
 * starting from 00:00 to 23:59
 * Return: void
 */
void jack_bauer(void)
{
	int i, j, k, l;

	i = 0;

	while (i < 3)
	{
		j = 0;
		while (j < 4)
		{
			k = 0;
			while (k <= 5)
			{
				for (l = 0; l < 10; l++)
				{
					_putchar(i + j + ':' + k + l);
					_putchar('\n');
				}
				k++;
			}
			j++;
		}
		i++;
	}
}
