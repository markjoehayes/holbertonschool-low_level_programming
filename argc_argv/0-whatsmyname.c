#include "main.h"
#include <stdio.h>

/**
 * main - prints program name
 * @argc: number of arguments
 * Return: ) for success
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
