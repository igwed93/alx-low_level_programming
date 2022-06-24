#inlcude "main.h"

/**
 * _strlen_recursion - funtion that returns the length of a string
 * @s: string whose length is to be returned
 *
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
