#include "main.h"

char *_strpbrk(char *s, char *accept)
{
	char *c = accept;

	if (!*s)
		return ('\0');

	while (*s)
	{
		for (c = accept; *c; c++)
		{
			if (*s == *c)
				break;
		}
		if (*c)
			break;
		s++;
	}
	if (*c == '\0')
		s = '\0';

	return (s);
}
