#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - multiply two numbers from cli
 * @x: number to multiply
 * @y: number to multilpy
 * @argc: arg count
 * @argv: numbers
 * Return: ) for sucess
 */

int main(int argc, char *argv[])
{
	int x, y;

	if (argc > 2)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		printf("%d\n", x * y);
	}
	else
		printf("Error\n");
	return (0);
}
