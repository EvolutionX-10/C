#include <stdio.h>

int sum(int n) {
	if (n == 0) return n;
	return n + sum(n-1);
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf(" %d", &n);

	int sumv = sum(n);
	printf("Sum is %d\n", sumv);

	return 0;
}