#include <stdio.h>

int reverse(int);

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Reverse of %d is %d", n, reverse(n));
	return 0;
}

int reverse(int num)
{
	static int rev;
	if (num == 0)
		return rev;
	rev = rev * 10 + (num % 10);
	return reverse(num / 10);
}