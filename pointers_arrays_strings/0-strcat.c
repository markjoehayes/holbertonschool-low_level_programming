#include "main.h"

/**
 * _strcat - concatenates two strings
 * @src: string1
 * @dest: string2
 * Return: appended string
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
