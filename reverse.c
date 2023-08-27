#include <stdio.h>

int main()
{
	// take a number, reverse it and print it
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);

	int rev = 0;
	while (num > 0)
	{
		rev = rev * 10 + num % 10;
		num /= 10;
	}
	printf("Reverse is %d\n", rev);
	return 0;
}
