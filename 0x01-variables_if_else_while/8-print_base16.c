#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program prints all the numbers of base 16 in lowercase
 *
 */
int main(void)
{
	int i;
	char low;

	low = 'a';

	for (i = '0'; i <= '9'; i++)
		putchar(i);
		if (i > '9')
			for (low = 'a'; low < 'f'; low++)
				putchar(low);
	putchar('\n');

	return (0);
}
