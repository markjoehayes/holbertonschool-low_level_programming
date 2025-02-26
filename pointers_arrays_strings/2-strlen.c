#include "main.h"

/**
 * _strlen - returns the length of the string
 * @s: string to be tested
 * Return: returns an int for string length
 */

int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
		;
	return (counter);

}

