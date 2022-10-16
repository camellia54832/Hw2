#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j, k, origin;
	for (i = 1; i < 501; i++)
	{
		for (j = 1; j < 501; j++)
		{
			for (k = 1; k < 501; k++)
			{
				if (((i*i) + (j*j)) == (k*k))
					printf("%4d %4d %4d\n", i, j, k);
			}
		}
	}
	system("pause");
	return 0;
}