#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to be tested
 * Return: returns the last digit of given number
 */

int print_last_digit(int n)
{
	if (n < 0)
	{
		int digit = -1 * (n % 10);

		_putchar (digit + '0');
		return (digit);
	}
	if (n >= 0) 
	{
		int digit = n % 10;

		_putchar (digit + '0');
		return (digit);
	}
	return (0);
}
