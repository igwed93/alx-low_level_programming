#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates random valid passwords
 * for the program 101-crackme
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int pass[101];
	int i, sum, k;
	
	sum = 0;
	srand(time(NULL));

	for (i = 0; i < 101; i++)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			k = 2772 - sum - '0';
			sum += k;
			putchar(k + '0');
			break;
		}
	}

	return (0);
}
