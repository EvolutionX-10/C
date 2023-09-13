// write a c code to see if entered number is palindrome or not

#include <stdio.h>

int main()
{
	int n, r, sum = 0, temp;
	printf("Enter a number: ");
	scanf("%d", &n);
	temp = n;
	while (n > 0)
	{
		r = n % 10; // get last digit
		sum = sum * 10 + r; // reverse the number
		n = n / 10; // remove last digit
	}
	if (temp == sum)
		printf("Palindrome");
	else
		printf("Not Palindrome");
	return 0;
}