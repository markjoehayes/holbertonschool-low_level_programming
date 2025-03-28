#include<stdio.h>

/**
 * main - program to sum the even fibonacci
 * Return: 0 for success
 */

#define MAX 4000000

int main(void)
{
	long int sum = 0;
	long int t1 = 1, t2 = 2;
	long int nextTerm = t1 + t2;


	while (sum <= MAX)
	{
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
		if (nextTerm % 2 == 0)
			sum += nextTerm;
	}
	printf("%ld\n", sum);

	return (0);
}
