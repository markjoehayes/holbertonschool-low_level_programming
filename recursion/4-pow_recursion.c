#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: integer to start
 * @y: power to raise x
 * Return: return value of x after raising it y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}
