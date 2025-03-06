#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of integers
 * @n: number of elements
 * @a: array
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
		i++;
	}
	putchar('\n');
}




