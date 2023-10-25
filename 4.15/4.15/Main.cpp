#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	float final_money;
	int year;
	float i,j;

	printf("Year\t");

	for (i = 10; i <= 12; i+=0.5) 
	{
		printf("%.1f%%\t", i);
	}

	printf("\n");

	for (year = 1; year <= 15; year++) 
	{
		printf("%d\t", year);
		for (j = 0.1; j < 0.125; j+=0.005) 
		{
			final_money = 5000 * pow(1+j, year);
			printf("%.1f\t", final_money);
		}
		printf("\n");
	}
	return 0;
}