#include"main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: string in question
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 */

 unsigned int _strspn(char *s, char *accept)
 {
	 char *str = s;
	 char *c;

	 while (*s)
	 {
		 for (c = accept; *c; c++)
		 {
			 if (*s == *accept)
				 break;
		 }
		 if (*c == '\0')
			 break;
		 s++;
	 }
	 return (s - str);
 }


