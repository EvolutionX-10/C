#include <stdio.h>

int prime(int n)
{
	for (int i = 2; i <= n / 2; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}
int main()
{
	for (int i = 2; i < 100; i++)
	{
		if (prime(i)) printf("%d ", i);
	}
	return 0;
}