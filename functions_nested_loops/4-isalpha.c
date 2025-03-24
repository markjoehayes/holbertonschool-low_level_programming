#include "main.h"

/**
 * _isalpha - checks if character is alpha letter
 *@c: The character to be tested
 * Return: 1 for aplpha and 0 for otherwise
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
	return (0);
}
