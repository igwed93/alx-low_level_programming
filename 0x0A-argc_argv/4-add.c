#include <stdio.h>
#include <stdlib.h>

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
		if (!atoi(argv[i]))
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
