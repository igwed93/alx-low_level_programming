#include <stdio.h>
#include <stdlib.h>

int change_checker(int m);
int numberChecker(char *s);

/**
 * numberChecker - checks if the number contains only integers
 * @s: the string to check
 *
 * Return: 1 if numbers alone, 0 if not
 */
int numberChecker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
 * change_checker - checks for the minimum amount of coins
 * to make change for an amount of money.
 * @m: money to be checked
 *
 * Return: returns the minimum number of coins.
 */
int change_checker(int m)
{
	int change, coins;

	coins = 0;
	change = m;

	if (change < 0)
	{
		change = 0;
	}
	coins = change / 25;
	change = change % 25;
	coins = coins + (change / 10);
	change = change % 10;
	coins = coins + (change / 5);
	change = change % 5;
	coins = coins + (change / 2);
	change = change % 2;
	coins += change;
	printf("%d\n", coins);
	return (coins);
}

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money
 * @argc: this is the argument count of the program
 * @argv: a pointer array pointing to the arguments
 *
 * Return: 1 on error or 0 on success.
 */
int main(int argc, char *argv[])
{
	int change;
	char *str = argv[1];

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(str);

	if (change >= 0 && numberChecker(str) == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0 && numberChecker(&str[1]) == 0)
	{
		printf("Error\n");
		return (1);
	}
	change_checker(change);
	return (0);
}
