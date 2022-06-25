#include "main.h"


int check_primality(int n, int i);

/**
 * is_prime_number - function that tests for primality
 * @n: integer to be tested
 *
 * Return: 1 if n is a prime and 0 if otherwise.
 */
int is_prime_number(int n)
{
	return (check_primality(n, 2));
}

/**
 * check_primality - function that does the actual testing for primality
 * @n: integer to be tested
 * @i: iterator
 *
 * Return: 1 if n is a modulo of i and 0 otherwise.
 */
int check_primality(int n, int i)
{
	if (n <= 1 || n % i == 0)
		return (0);
	else if (n == i)
		return (1);
	else if (n > i)
		check_primality(n, i + 1);
	return (1);
}
