#include <stdio.h>
/*
	1
  2 3 2
3 4 5 4 3
*/
int main()
{
	int n;
	scanf("%d", &n);

	int a = 1;
	for (int i = 0; i < n; i++)
	{
		for (int k = 0; k < n - i; k++)
		{
			printf("  ");
		}
		for (int j = 0; j <= i; j++)
		{
			printf("%d ", a++);
		}
		for (int m = 1; m <= i; m++)
		{
			printf("%d ", a - m - 1);
		}
		printf("\n");
	}

	return 0;
}