#include "main.h"
#include<stdio.h>

/**
 * print_to_98 - prints digits from n to 98
 * @n: number to start count from
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 97; n++)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
	if (n > 98)
	{
		for (; n >= 97; n--)
		{
			printf("%d, ", n);
		}
		printf("%d\n", 98);
	}
}
