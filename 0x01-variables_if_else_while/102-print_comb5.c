#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 *
 * This program prints all possible combinations of two two-digit numbers
 *
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 98; n1++)
	{
		for (n2 = n1 + 1; n2 <= 99; n2++)
		{
			putchar((n1 / 10) + '0');
			putchar((n1 % 10) + '0');
			putchar(' ');
			putchar((n2 / 10) + '0');
			putchar((n2 % 10) + '0');

			if (n1 == 98 && n2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
