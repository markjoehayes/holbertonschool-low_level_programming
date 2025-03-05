#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to search
 * @needle: substring to search for first occurance
 * Return: pointer to begining of substrung or NULl
 */

char *_strstr(char *haystack, char *needle)
{
	int i;
	int c = needle[0];

	if (c == 0)
		return (haystack);
	for (; haystack[0] != '\0'; haystack++)
		{
			if (haystack[0] != c)
				continue;
			for (i = 1; needle[i] != 0; i++)
				if (haystack[i] != needle[i])
					break;
			if (needle[i] == '\0')
				return (haystack);
		}
		return ('\0');
}
