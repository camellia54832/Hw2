#include <stdio.h>
#include <stdlib.h>

int main()
{
	double original, rate, ans;
	int i, j;

	

	for (i = 0; i < 5; i++)
	{
		original = 5000;
		rate = 0.1 + (i*0.005);
		printf("rate=%2.2lf%%: \n", rate);
		for (j = 0; j < 15; j++)
		{
			ans = (original*(rate + 1));
			printf("%-2dyear = %.2lf\n", (j + 1), ans);
			original = ans;
		}
		printf("\n");
	}

	system("pause");
	return 0;

}