#include <stdio.h>
#include <stdlib.h>

int main()
{
	double sales, salary;
	while (1) 
	{
		printf("Enter sales in dollars (-1 to end): ");
		scanf_s("%lf", &sales);
		if (sales == -1) 
		{
			break;
		}

		salary = 200 + sales * 0.09;

		printf("Salary is: $%.2lf\n\n",salary);
	}
	system("pause");
	return 0;
	
}