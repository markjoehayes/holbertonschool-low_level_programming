#include "main.h"

/**
 * is_prime_number - tests if a number is prime
 * @n: number to test
 * @i: counter
 * Return: 1 for prime, otherwise 0
 */

int prime_number(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}

int prime_number(int n, int i)
{
	if (i == 1)
		return (1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (prime_number(n, i - 1));
	return (0);
}

