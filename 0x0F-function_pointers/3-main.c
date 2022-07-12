#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - Entry point of the program
 * @argc: argument count
 * @argv: argument array
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int task, x, y;

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	task = (*get_op_func(argv[2]))(x, y);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (
		(strcmp(argv[2], "+") &&
		 strcmp(argv[2], "-") &&
		 strcmp(argv[2], "*") &&
		 strcmp(argv[2], "/") &&
		 strcmp(argv[2], "%"))
	   )
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0)
			&& y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", task);
	return (0);
}

