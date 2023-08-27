#include <stdio.h>

int main()
{
	// take a number
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	// print multiplication table till 10 in formatted way
	for (int i = 1; i <= 10; i++)
	{
		printf("%d x %d = %d\n", n, i, n * i);
	}
	return 0;
}