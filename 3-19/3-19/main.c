#include <stdio.h>
#include <stdlib.h>

int main()
{
	double rate, princpal, days, charge;

	while (1)
	{

		printf("Enter loan proncpal (-1 to end): ");
		scanf_s("%lf", &princpal);
		if (princpal == -1)
			break;

		printf("Enter interest rate: ");
		scanf_s("%lf", &rate);

		printf("Enter term od the loan in days: ");
		scanf_s("%lf", &days);

		charge = princpal * rate * days / 365;

		printf("The interest charge is $%.2lf\n\n",charge);

	}
	system("pause");
	return 0;
}