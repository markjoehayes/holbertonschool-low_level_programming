#include "main.h"

/**
 * puts_half - print half of the string
 * @str: given string
 */

void puts_half(char *str)
{
	int counter;
	int length;

	for (counter = 0; ; counter++)
	{
		if (str[counter] == '\0')
			break;
	}
	if (counter % 2 == 0)
		length = counter / 2;
	else if (counter % 2 != 0)
		length = (counter + 1) / 2;
	for (; length <= counter; length++)
		_putchar(str[length]);

	_putchar('\n');
}

