#include <stdio.h>
/*
	A
  B A
C B A
*/
int main()
{
	int n = 5;
	int c = 65;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf("  ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("%c ", c - k);
		}
		c++;
		printf("\n");
	}

	return 0;
}