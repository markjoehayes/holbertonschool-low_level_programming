#include<stdio.h>

/**
 * main - program to print the first 50 fibonacci numbers
 * Return: 0 for success
 */


int main(void)
{
	int i;
	unsigned long int t1 = 1, t2 = 2;
	unsigned long int nextTerm = t1 + t2;

	printf("%lu, %lu, ", t1, t2);

	for (i = 3; i <= 97; i++)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		printf("%lu, ", nextTerm);
	}
	printf("%lu\n", nextTerm);

	return (0);
}
