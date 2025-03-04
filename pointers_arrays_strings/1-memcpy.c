#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * @dest: This is the output string
 * @src: This is my input string
 * @n: This is the number bytes to copy
 *
 * Return: dest 
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pdest = dest;
	char const *psrc =  src;

	for (i = 0; i < n; i++)
	{
		*pdest++ = *psrc++;
	}
	return (dest);
}
