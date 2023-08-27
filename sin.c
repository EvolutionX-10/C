#include <stdio.h>
#include <math.h>

int fact(int);

int main()
{
	int n;
	float x, sin = 0;
	printf("Enter x and n: ");
	scanf(" %f %d", &x, &n);
	x *= 3.14159/180;
	for (int i = 0; i < n; i++)
	{
		sin += (pow(x, 2 * i + 1) / fact(2 * i + 1)) * (pow(-1, i));
	}
	
	printf("sin(%.2f) = %.4f\n", x, sin);
}


int fact(int num)
{
	if (num <= 1) return 1;
	return num * fact(num - 1);
}
