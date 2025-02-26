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
		if (str[counter] == '\0')
			break;
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}

