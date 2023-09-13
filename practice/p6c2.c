#include <stdio.h>

int product(int, int);
int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Product of %d and %d is %d\n", a, b, product(a, b));
	return 0;
}

int product(int a, int b)
{
	if (b == 0)
		return 0;
	return a + product(a, b - 1);
}