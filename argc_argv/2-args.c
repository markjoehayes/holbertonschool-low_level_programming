#include <stdio.h>
#include "main.h"

/**
 * main - prints arguments on a new line
 * @argc: number args
 * @argv: command args
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
