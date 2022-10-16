#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j,k;
	char A = 'A',b='*',c=' ';

	printf("(%c)\n", A);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j <= i)
				printf("%c",b);
			else
				printf("%c",c);
		}
		printf("\n");
	}

	printf("(%c)\n", A+1);
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > 0; j--)
		{
			if (j > i)
				printf("%c", b);
			else
				printf("%c", c);
		}
		printf("\n");
	}

	printf("(%c)\n", A+2);
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j >= i)
				printf("%c", b);
			else
				printf("%c", c);
		}
		printf("\n");
	}

	printf("(%c)\n", A + 3);
	for (i = 0; i < 10; i++)
	{
		for (j = 10; j > 0; j--)
		{
			if (j <= (i+1))
				printf("%c", b);
			else
				printf("%c", c);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}