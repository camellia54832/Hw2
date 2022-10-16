#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k=4, l=1;

	for (i=0;i<5;i++)
	{
		for (j = 0; j < k; j++)
			printf(" ");
		for (j = 0; j < l; j++)
			printf("*");
		printf("\n");
		k--;
		l += 2;
	}
	
	k = 1;
	l = 7;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < k; j++)
			printf(" ");
		for (j = 0; j < l; j++)
			printf("*");
		printf("\n");
		k++;
		l -= 2;

	}
	system("pause");
	return 0;
}