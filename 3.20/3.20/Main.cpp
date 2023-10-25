#include <stdio.h>
#include <stdlib.h>

int main()
{
	while (true)
	{
		float hour=0,rate=0,salary=0;
		printf("Enter # of hours worked (-1 to end):");
		scanf("%f",&hour);

		if(hour==-1)
			return 0;

		printf("Enter hourly rate of the worker($00.00):");
		scanf("%f",&rate);

		if (hour<=40)
		{
			salary = hour * rate;
		}
		else
			salary = 40 * rate +(hour-40)*1.5* rate;

		printf("Salary is $%.2f\n\n",salary);

	}
	
}