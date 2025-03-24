#include<stdio.h>

/**
 * main - program to print the first 50 fibonacci numbers
 * @t1: 1st number
 * @t2: second number
 * @nextTerm: next number in sequence
 */

int main(void)
{
	int i;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;
	
	printf("%ld, %ld, ", t1, t2);

	for (i=3; i <= 49; i++)
	{
		printf("%ld, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}
	printf("%ld\n", nextTerm);

	return (0);
}
