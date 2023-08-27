#include <stdio.h>

int main()
{
	int num, r;
	printf("Enter a number: ");
	scanf(" %d", &num);

	int prev = 0;
	int temp = num;
	while (temp > 0)
	{
		r = temp % 10;
		prev = prev > r ? prev : r;
		temp = temp / 10;
	}
	printf("%d is largest digit in %d\n", prev, num);
	return 0;
}
