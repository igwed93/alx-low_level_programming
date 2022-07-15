#include <stdio.h>

/**
 * funny_func - function that executes before the main program
 *
 * Return: void
 */
void funny_func(void)__attribute__((constructor));

void funny_func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
