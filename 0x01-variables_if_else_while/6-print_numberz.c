#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * This program prints all single digits of the base 10
 * starting from 0 and then a new line afterwards
 *
 */
int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
		putchar('\n');
	return (0);
}
