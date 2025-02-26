#include "main.h"

/**
 * swap_int - checks for uppercase character
 * @a: int to swap
 * @b: int to swap
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

