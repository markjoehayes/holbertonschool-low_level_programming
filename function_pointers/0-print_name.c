#ifndef function_pointers
#define function_pointers
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: string to print
 * @f: functionm
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#endif /*function_pointers.h*/
