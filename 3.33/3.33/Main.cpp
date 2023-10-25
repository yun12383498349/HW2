#include <stdio.h>
#include <stdlib.h>

int main()
{
	int H, W,i,j;
	printf("Enter length:");
	scanf("%d",&H);
	printf("Enter Width:");
	scanf("%d", &W);

	for (i=0;i<W;i++)
	{
		printf("+");
	}
	printf("\n");
	for (j=0;j<(H-2);j++)
	{
		printf("+");
		for(i = 0; i < (W-2); i++)
			printf(" ");
		printf("+");
		printf("\n");
	}
	for (i = 0; i < W; i++)
	{
		printf("+");
	}
	printf("\n");
	return 0;
}