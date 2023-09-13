#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	for (int i = --n; i > 0; i--) // Ignore one level down
	{
		for (int j = 0; j < n - i; j++)
		{
			printf(" ");
		}
		printf("  "); // 2 Space
		for (int k = 0; k < i; k++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}