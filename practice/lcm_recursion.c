#include <stdio.h>

// Function to calculate the LCM of two integers using recursion
int lcm(int a, int b, int multiple)
{
	if (multiple % a == 0 && multiple % b == 0)
	{
		return multiple;
	}
	else
	{
		return lcm(a, b, multiple + 1);
	}
}

int main()
{
	int num1, num2, multiple;
	printf("Enter two integers: ");
	scanf("%d %d", &num1, &num2);
	multiple = (num1 > num2) ? num1 : num2; // Find the maximum of the two numbers
	printf("The LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2, multiple));
	return 0;
}
