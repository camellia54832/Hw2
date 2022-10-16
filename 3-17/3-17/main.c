#include <stdio.h>
#include <stdlib.h>

int main() 
{
	double i=0,account,balance,charge,credit,limit;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%lf", &account);
		if (account == (-1))
		{
			break;
		}
		printf("Enter beginning balance: ");
		scanf_s("%lf", &balance);

		printf("Enter total charges: ");
		scanf_s("%lf", &charge);

		printf("Enter total credits: ");
		scanf_s("%lf", &credit);

		printf("Enter credit limit: ");
		scanf_s("%lf", &limit);

		balance = balance + charge - credit;

		printf("Account:      %.2lf\n",account);
		printf("Credit limit: %.2lf\n",limit);
		printf("Balance:      %.2lf\n",balance);
		if (balance>limit)
		{
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}