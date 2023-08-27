#include <stdio.h>

/*
    A
  A B A
A B C B A
*/

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n - i; j++) // for spaces
		{
			printf("  ");
		}
		for (int j = 1; j <= i; j++) // for characters that are increasing
		{
			printf("%c ", j + 64);
		}
		for (int j = i - 1; j >= 1; j--) // for rest of decreasing characters
		{
			printf("%c ", j + 64);
		}
		printf("\n"); // for new line
	}

	return 0;
}

