#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints all the
 * arguments that are passed to it
 * @argc: argument count
 * @argv: array of pointers to arguments
 *
 * Return: always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
