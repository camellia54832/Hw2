#include <stdio.h>
#include <stdlib.h>

int main()
{
	double hour, rate, salary;
	while (1)
	{
		printf("Enter # of hours worked (-1 to end): ");
		scanf_s("%lf", &hour);
		if (hour == -1)
			break;

		printf("Enter hourly rate of the worker ($00.00): ");
		scanf_s("%lf", &rate);

		salary = hour * rate;

		printf("Salary is: $%.2lf\n\n", salary);

	}

	system("pause");
	return 0;

}