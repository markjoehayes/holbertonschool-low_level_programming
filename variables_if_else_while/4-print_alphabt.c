#include<stdio.h>

/**
 * main - main function
 * Return: zero is success
*/

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);

	}
	putchar('\n');
	return (0);
}
