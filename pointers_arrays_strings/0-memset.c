#include<stdio.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to s
 *           with the constant byte b
 * @s: points to memoray are
 * @b: constant byte
 * @n: the bytes to fill
 * Return: pointer to memory area s
 */

 char *_memset(char *s, char b, unsigned int n)
 {
	unsigned int i = 0;
	char *start = s;

	while (i < n)
	{
		*s++ = b;
		i++;
	}
	return (start);
}
