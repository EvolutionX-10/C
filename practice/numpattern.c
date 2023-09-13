/*
    1
  1 2 1
1 2 3 2 1
*/

#include <stdio.h>

int main()
{
	int n = 3;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("  ");
		}
		for (int k = 1; k <= i; k++)
		{
			printf("%c ", k + 64);
		}
		for (int k = i - 1; k >= 1; k--)
		{
			printf("%c ", k + 64);
		}
		printf("\n");
	}
	return 0;
}