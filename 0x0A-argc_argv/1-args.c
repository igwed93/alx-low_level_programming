#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the number of arguments
 * supplied to it
 * @argc: argument count to be printed
 * @argv: array containing pointers that points
 * to the arguments.
 *
 * Return: always 0 (success).
 */
int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%d\n", argc);

	return (0);
}
