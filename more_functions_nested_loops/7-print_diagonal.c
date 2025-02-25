#include "main.h"

/**
 * print_diagonal - draws a diagnol line in stdout
 * @n: length of line
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i-1; j++)
			{
				_putchar(32);
			}
			_putchar(92);

			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}

