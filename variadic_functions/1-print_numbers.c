#include<stdio.h>
#include<stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers with seperator
 * @seperator: field seperator
 * @n: number of numbers
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));
		if (i != (n - 1) && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(list);
}

