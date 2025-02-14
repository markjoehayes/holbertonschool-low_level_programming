#include<stdio.h>

/**
 * main - main function
 * Return: zero is success
 */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
