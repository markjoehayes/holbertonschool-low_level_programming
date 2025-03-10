#include<stdio.h>
#include<stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
                  with a specific char
 * @size: size of array
 * @c: specific char
 * Return: pointer to array or NULL if it fails
 */

char *create_array(unsigned int size, char c) 
{
	char *a;
	unsigned int i = 0;

	a = malloc(size * sizeof(c));
	while (i < size)
	{
		if (a == NULL)
			return (NULL);
		a[i] = c;
		i++;
	}
	return (a);
}
