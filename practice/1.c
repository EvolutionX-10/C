#include <stdio.h>

int main()
{
	int i, j, n = 9;
	for (i = 0; i < n; i++)
		printf("* ");
	printf("\n");
	for (i = 0; i < n - 2; i++)
	{
		printf("* ");
		for (j = 0; j < n - 2; j++)
		{
			if (j == i || j == n - i - 3)
				printf("* ");
			else
				printf("  ");
		}
		printf("*\n");
	}
	for (i = 0; i < n; i++)
		printf("* ");
	return 0;
}