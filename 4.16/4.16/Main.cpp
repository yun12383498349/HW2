#include <stdio.h>
#include <stdlib.h>

int main()
{
	int a = 10; 
	int i, j, k;
	//1
	for (i = 1; i <= a; i++) 
	{
		for (j = 1; j <= i; j++) 
		{
			printf("%s","*");
		}
		printf("\n");
	}
	//2
	for (i = a; i >= 1; i--) 
	{
		for (j = 1; j <= i; j++)
		{
			printf("%s", "*");
		}
		printf("\n");
	}
	//3
	for (i = 0; i < a; i++) 
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < a - i; k++) 
		{
			printf("*");
		}
		printf("\n");
	}
	//4
	for (i = 1; i <=a; i++) 
	{
		for (j = 1; j <= a - i; j++) 
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++) 
		{
			printf("*");
		}

		printf("\n");
	}
	return 0;
}