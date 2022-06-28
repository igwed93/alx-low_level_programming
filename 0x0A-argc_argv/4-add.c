#include <stdio.h>
#include <stdlib.h>

int numChecker(char *s);

/**
 * numChecker - function that checks if a number is a n integer
 * @s: pointer to a character
 *
 * Return: 0 if successful and 1 otherwise.
 */
int numChecker(char *s)
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
 * main - program that returns the some of positive integers
 * @argc: argument count
 * @argv: array of pointers pointing to arguments
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	int i, sum;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (numChecker(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		else if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			sum += atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
	return (0);
}
