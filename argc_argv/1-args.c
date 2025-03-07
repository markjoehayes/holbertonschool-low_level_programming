#include <stdio.h>
#include "main.h"

/**
 * main - print out number of cli args
 * @argc - number of argumenyts
 * @argv - arguments
 * Return: 0 for sucess
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
 	return (0);
}
