#include <stdio.h>

int main()
{
	int num, r, sum = 0;
	printf("Enter a number: ");
	scanf(" %d", &num);

	int temp = num;
	while (temp > 0)
	{
		r = temp % 10;
		sum += (r * r * r);
		temp = temp / 10;
	}

	sum == num ? printf("Armstrong!\n")
			   : printf("Not Armstrong!\n");

	return 0;
}
