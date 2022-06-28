#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that multiplies two numbers
 * @argc: argument count
 * @argv: array of pointers poiting to argument
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int mul, i;

	i = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[i]) * atoi(argv[i + 1]);
		printf("%d\n", mul);
	}
	return (0);
}
