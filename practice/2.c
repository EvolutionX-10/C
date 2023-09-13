#include <stdio.h>

int main()
{
	int n; double a, r, sum = 0;

	printf("Enter a, r and n: ");
	scanf("%lf %lf %d", &a, &r, &n);

	for (int i = 1; i <= n; i++)
	{
		sum += a / i;
		a *= r;
	}
	printf("Sum of the hp is %f\n", sum);
	return 0;
}
