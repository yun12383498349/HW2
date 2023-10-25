#include <stdio.h>
#include <stdlib.h>

int main()
{
	float loan_principal = 0, rate = 0, day = 0,charge=0;
	while (true)
	{
		printf("Enetr loan principal(-1 to end):");
		scanf("%f",&loan_principal);

		if(loan_principal==-1)
			return 0;

		printf("Enetr interest rate:");
		scanf("%f", &rate);

		printf("Enetr term of the loan in days:");
		scanf("%f", &day);

		charge = loan_principal * rate * day/365;
		printf("The interest charge is $%.2f\n",charge);

	}
	

}