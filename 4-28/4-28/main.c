#include <stdio.h>
#include <stdlib.h>

int main()
{
	int code=0;
	double  salary, hour, hourlyrate, sales, price, quantity;
	while (code!=-1)
	{
		printf("Enter employee's paycode (-1 to end)");
		scanf_s("%d", &code);

		switch (code)
		{
			case -1:
				break;
			case 1:
				printf("Enter weekly salary: ");
				scanf_s("%lf", &salary);
				printf("Weekly salary is: %.2lf\n",salary);
				break;

			case 2:
				printf("Enter weekly working hours: ");
				scanf_s("%lf", &hour);
				printf("Enter hourly rate: ");
				scanf_s("%lf", &hourlyrate);
				if (hour > 40)
				{
					salary = (hour - 40)*hourlyrate*1.5 + 40 * hourlyrate;
					printf("Weekly salary is: %.2lf\n", salary);
				}
				else
				{
					salary = hour * hourlyrate;
					printf("Weekly salary is: %.2lf\n", salary);
				}
				break;

			case 3:
				printf("Enter weekly sales: ");
				scanf_s("%lf", &sales);
				salary = 250 + sales * 0.057;
				printf("Weekly salary is: %.2lf\n", salary);
				break;

			case 4:
				printf("Enter product price: ");
				scanf_s("%lf", &price);
				printf("Enter weekly product quantity: ");
				scanf_s("%lf", &quantity);
				salary = price * quantity;
				printf("Weekly salary is: %.2lf\n", salary);
				break;
		}

	}
	system("pause");
	return 0;
}