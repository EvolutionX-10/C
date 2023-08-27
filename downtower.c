#include <stdio.h>

int main()
{
	int n;
	printf("Enter a number: ");
	scanf(" %d", &n);

	for (size_t i = n; i > 0; i--)
	{
		for (size_t j = 0; j < i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}