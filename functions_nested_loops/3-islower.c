#include "main.h"

/**
 * _islower - checks for lower case character
 *@c: The letter to be tested
 * Return: 1 for lower and 0 for upper
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (0);
	return (0);
}
