#include "main.h"

/**
 * _strlen-recursion - returns the length of a string
 * @s: string to check
 * Return: strlenght
 */

int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1+ _strlen_recursion(s+1));
	return (0);
}
