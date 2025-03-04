#include<stdio.h>

int main(void){
	int i;

	i = 10;
	while (i < 20)
	{
		printf("%d", i % 2 == 0);
		i++;
	}
}
