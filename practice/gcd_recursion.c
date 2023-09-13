// implement gcd using recursion
#include <stdio.h>
int gcd(int a, int b) // two numbers
{
	if (b == 0) // base case
		return a; // gcd of a and 0 is a
	else
		return gcd(b, a % b); // gcd of a and b is gcd of b and a%b
}

int main()
{
	int a, b;
	printf("Enter the two numbers: ");
	scanf(" %d %d", &a, &b);
	printf("GCD of %d and %d is %d", a, b, gcd(a, b));
	return 0;
}