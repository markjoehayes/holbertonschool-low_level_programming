#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string, duplicate of str
 * @str: string to duplicate
 * Return: duplicate string or NULL
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		;
	s = malloc(sizeof(char) * (i + 1));
	if (s == NULL)
		return (NULL);
	s[i] = '\0';
	while (i--)
	{
		s[i] = str[i];
	}
	return (s);
}
