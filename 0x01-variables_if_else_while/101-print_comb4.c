#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program shows the possible combinations
 * of three different digit numbers in ascending order
 *
 */
int main(void)
{
	int dig1;
	int dig2;
	int dig3;

	for (dig1 = 0; dig1 < 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 < 9; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 < 10; dig3++)
			{
				putchar((dig1 % 10) + '0');
				putchar((dig2 % 10) + '0');
				putchar((dig3 % 10) + '0');
				putchar(',');
				putchar(' ');
				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
					continue;
			}
		}
	}
	putchar('\n');
	return (0);
}
