#include<stdio.h>

/**
 * _strchr - locates the first occurance of a character in a string
 * @s: string to search
 * @c: first character
 * Return: returns a pointer to first occurnance of character
 */

char *_strchr(char *s, char c)
{
	do {

		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (0);
}
