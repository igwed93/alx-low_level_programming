#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int DigitChecker(char *s);

/**
 * DigitChecker - function that verifies that the digits
 * of a number are comprised only of integers
 * @s: number to be checked
 *
 * Return: 0 on success.
 */
int DigitChecker(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	return (0);
}

/**
 * main  - program that multiplies two positive numbers
 * @argc: argument count
 * @argv: argument vector/ array
 * Return: returns the product of any two positive numbers
 */
int main(int argc, char *argv[])
{
	int a, b, num1, num2, mul;

	if (argc < 3 || argc > 3)
	{
		printf("%s\n", "Error");
		exit(98);
	}

	a = DigitChecker(argv[1]);
	b = DigitChecker(argv[2]);

	if (a == 0 && b == 0)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
