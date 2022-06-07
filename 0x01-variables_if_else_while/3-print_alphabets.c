#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * this program prints the alphabets in lower case and then in upper case
 *
 */
int main(void)
{
	char low;
	char upper;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (upper = 'A'; upper <= 'Z'; upper++)
		putchar(upper);
	printf("\n");
	return (0);
}
