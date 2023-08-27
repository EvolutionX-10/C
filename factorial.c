#include <stdio.h>
int factorial(int num);

int main()
{
	// calculate factorial using a separate function which uses recursion
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	// using for loop
	// int fact = 1;
	// for (int i = 1; i <= num; i++)
	// {
	// 	fact *= i;
	// }
	printf("Factorial of %d is %d\n", num, factorial(num));
	return 0;
}

int factorial(int num)
{
	if (num <= 1)
	{
		return 1;
	}
	return num * factorial(num - 1);
}