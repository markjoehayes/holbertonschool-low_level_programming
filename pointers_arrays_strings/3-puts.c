#include "main.h"

/**
 * _puts- prints string followed by new line to stdout
 * @str: str to print
 */

void _puts(char *str)
{
	int counter = 0;

	while (counter >= 0)
	{
		_putchar(str[counter]);
		if (str[counter] == '\0')
			break;
		counter++;
	}
	_putchar('\n');
}

