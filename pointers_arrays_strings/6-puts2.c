#include "main.h"

/**
 * puts2 - print every other character
 * @str: given string
 */

void puts2(char *str)
{
	int counter;

	for (counter = 0; ; counter++)
	{
		if (str[counter] == '\0')
			break;
		if (counter % 2 == 0)
	  		_putchar(str[counter]);
	}
	_putchar('\n');
}

