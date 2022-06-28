#include <stdio.h>
#include <stdlib.h>

/**
 * main - the program body
 * @argc: argument count
 * @argv: array that contains the argument
 *
 * Return: always 0 (successful)
 */
int main (int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[argc - 1]);
	}
	return (0);
}
