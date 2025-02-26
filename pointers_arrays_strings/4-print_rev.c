#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int counter;

	for (counter = 0; ; counter++)
	{
		if (s[counter] == '\0')
			break;
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		_putchar(s[counter]);
	}
	_putchar('\n');

}

