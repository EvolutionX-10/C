#include <stdio.h>

int main()
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);

	int lcm = a > b ? a : b;
	while (1)
	{
		if (lcm % a == 0 && lcm % b == 0)
		{
			printf("LCM of %d and %d is %d", a, b, lcm);
			break;
		}
		lcm++;
	}
	return 0;
}