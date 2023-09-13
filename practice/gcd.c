#include <stdio.h>

int getGCD(int, int);
int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	int gcd = 1;
	for (int i = 1; i <= a && i <= b; i++)
	{
		if (a % i == 0 && b % i == 0)
		{
			gcd = i;
		}
	}
	printf("GCD of %d and %d is %d\n", a, b, getGCD(a, b)); // With Recursion
	printf("GCD of %d and %d is %d\n", a, b, gcd); // Without Recursion
	return 0;
}

int getGCD(int a, int b) {
	static int c = 1;
	static int gcd = 1;
	c++;
	if (a % c == 0 && b % c == 0) gcd = c;
	if (c >= a || c >= b) return gcd;
	return getGCD(a, b);
}
