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
	int m, n;

	for (m = 0; m < 9; m++)
	{
		for (n = m + 1; n <= 9; n++)
		{
			putchar((m % 10) + '0');
			putchar((n % 10) + '0');
			if (m == 8 && n == 9)
			{
				continue;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
