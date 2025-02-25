#include<stdio.h>

/**
 * main - print 1 -100 replacing multiples of 3 with 
 *        fizz and multiples of 5 with buzz, both
 *        with fizzbuxx
 */

int main(void)
{
	int i;

	for (i = 1; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
