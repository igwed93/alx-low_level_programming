#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry pooint
 *
 * Return: Always 0 (Success)
 *
 * This program returns the last digit of n
 */
int main(void)
{
	int n;
	int LD;
	char str[] = "Last digit of";

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LD = n % 10;
	if (LD > 5)
	{
		printf("%s %d is %d and is greater than 5\n", str, n, LD);
	}
	else if (LD == 0)
	{
		printf("%s %d is %d and is 0\n", str, n, LD);
	}
	else if ((LD < 6) && (LD != 0))
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, LD);
	}
	return (0);
}
