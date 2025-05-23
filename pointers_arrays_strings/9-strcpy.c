#include "main.h"

/**
 * _strcpy - copies the strings pointed to by src
 * @dest: buffer
 * @src: string
 * Return: dest buffer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
