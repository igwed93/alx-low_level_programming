#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name
 * @name: pointer to a string
 * @f: function pointer that takes a char as an argument
 *
 * Return: nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
