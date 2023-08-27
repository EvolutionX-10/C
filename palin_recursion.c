#include <stdio.h>

int palin(int n, int sum)
{
	if (n == 0)
		return sum;
	int r = n % 10; // get last digit
	sum = sum * 10 + r; // reverse the number
	return palin(n / 10, sum); // remove last digit
}

int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int sum = palin(n, 0);
	if (n == sum)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}