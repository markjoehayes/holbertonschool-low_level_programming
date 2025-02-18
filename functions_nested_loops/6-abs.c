#include "main.h"

/**
 *_abs - returns the absolute value of an integer
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	if (n >= 0)
		return (n);
	return (0);
}
