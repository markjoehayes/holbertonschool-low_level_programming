#include "main.h"

/**
 * print_triangle - function to print a triangle of hashes 
 * @size: integer to represent size of triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
			_putchar(32);
		for (k = 1; k <= i; k++)
		{
			_putchar('#');			
			_putchar(32);
		}
		_putchar('\n');
	}
}

