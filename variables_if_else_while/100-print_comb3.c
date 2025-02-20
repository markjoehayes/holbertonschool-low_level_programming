#include<stdio.h>

/**
 * main - main function
 * Return: zero is success
 */

int main(void)
{
	int num1 = '0';
	int num2;

	for (; num1 <= '9'; num1++)
	{
		for(num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if (num1 == '8' && num2 == '9')
				break;
			putchar(',');
			putchar(' ');

		}
	}
	putchar('\n');
	return (0);

}
