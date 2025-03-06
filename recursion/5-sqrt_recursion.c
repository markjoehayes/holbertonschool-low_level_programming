#include <stdio.h>

/**
 * sqrt_recursion - returns the sqrt of a number
 * @n: number to take sqrt of
 * Return: sqrt or -1 if there is no natural sqrt
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);

	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
			return (sqrt * 2);
		return (-1);
	}
	return (0);
}

