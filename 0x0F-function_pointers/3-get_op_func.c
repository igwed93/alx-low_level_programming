#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * get_op_func - function that gets the correct function to
 * perform the given operation
 * @s: pointer to a char
 *
 * Return: pointer to the correct function for the operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
