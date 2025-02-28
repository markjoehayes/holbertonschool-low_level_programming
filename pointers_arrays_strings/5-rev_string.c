#include "main.h"

/**
 * print_rev - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	int counter;

	for (counter = 0; ; counter++)
	{
		if (s[counter] == '\0')
			break;
	}
	for (counter -= 1; counter >= 0; counter--)
	{
		s[counter] = counter;
	}

}

