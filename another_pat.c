#include <stdio.h>
/*
	A
  A B C
A B C D E
*/

int main()
{
	int c = 65;
	int n = 3;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("  ");
		}
		for (int k = 0; k < 2 * i - 1; k++)
		{
			printf("%c ", c + k);
		}
		printf("\n");
	}
	return 0;
}