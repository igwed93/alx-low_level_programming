#include "main.h"
#include <string.h>

int _palindromeChecker(char *str, int len, int i);
int _strlen_recursion(char *s);
/**
 * is_palindrome - function that tests if a string is palindrome
 * @s: string to be tested
 *
 * Return: 1 is True and 0 if False.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int length = _strlen_recursion(s) - 1;

	return (_palindromeChecker(s, length, i));
}

#include "main.h"

/**
 * _strlen_recursion - function that calculates the len
 * of a string
 * @s: string whose len is to be computed
 * Return: returns the computed length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}

#include "main.h"
#include <string.h>

/**
 * _palindromeChecker - function that prints a string in reverse
 * @str: string to check
 * @len: the length of the string
 * @i: iterator
 *
 * Return: reversesd string.
 */
int _palindromeChecker(char *str, int len, int i)
{
	if (i < len && str[i] == str[len])
		return (_palindromeChecker(str, len - 1, i + 1));
	if (str[i] != str[len])
		return (0);
	return (1);
}
