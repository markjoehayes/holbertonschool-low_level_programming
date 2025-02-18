#include "main.h"

/**
 * print_sign - checks if character is alpha letter
 *@n: The character to be tested
 * Return: 1 for positive, 0 for zero and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if  (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
