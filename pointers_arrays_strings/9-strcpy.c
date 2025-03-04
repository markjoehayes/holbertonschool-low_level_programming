#include "main.h"

/**
 * strcpy - copies the strings pointed to by src to the buffer pointes at by dest
 * @dest: buffer
 * @src: string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);

}

