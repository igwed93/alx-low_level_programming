#include "main"

/**
 * print_alphabet_x10 - prints 10 times the alphabets.
 *
 * Return: void
 *
 */
void print_alphabet_x10(void)
{
	j = 1;
	char y;

	while (j <= 10)
	{
		for (y = 'a'; y <= 'z'; y++)
		{
			_putchar(y);
		}
		_putchar('\n');
		j++;
	}
}
