#include <stdio.h>
#include <stdlib.h>

int main()
{
	float sells=0;
	while (true)
	{
		printf("Enter sales in dollars(-1 to end):");
		scanf("%f", &sells);
		if (sells != -1)
		{
			printf("Salary is:%.2f\n\n", (sells*0.09) + 200);
		}
		else
			return 0;
	}
	


	;
}