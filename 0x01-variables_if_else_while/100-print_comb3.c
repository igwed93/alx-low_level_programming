#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program prints all possible combinations of two digits
 *
 */
int main(void)
{
	int n;

	for (n = 1; n < 90; n++)
	{
		putchar((n % 10) + '0');

		if (n != 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
