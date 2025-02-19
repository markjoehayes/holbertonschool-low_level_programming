#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		_putchar('0' + '0');
		_putchar(',' + '0');
		_putchar(32 + '0');
		for (b = 0; b <= 9; b++)
		{
			_putchar(b + '0');
		}
		_putchar('\n');
		_putchar(a + '0');
	}
	
}
