#include <stdio.h>
#include <stdlib.h>

int main()
{
	int account_number;
	float balance, charges, credits,limit;
	float new_balance;

	while (true)
	{
		printf("Enter account number(-1 to end):");
		scanf("%d", &account_number);

		if (account_number == -1)
			return 0;

		printf("Enter beginning balance:");
		scanf("%f", &balance);

		printf("Enter total charges:");
		scanf("%f", &charges);

		printf("Enter total credits:");
		scanf("%f", &credits);

		printf("Enter credit limit:");
		scanf("%f", &limit);

		new_balance = balance + charges - credits;

		if (new_balance >= limit)
		{
			printf("Account number:%d\n",account_number);
			printf("Credit Limit:%.2f\n", limit);
			printf("Balance:%.2f\n", new_balance);
			printf("Credit Limit Exceeded.\n");
		}
		
	}
	


	
}
