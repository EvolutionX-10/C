#include <stdio.h>

int main()
{
	int a = 0, b = 1;
	for (int i = 0; i < 10; i++)
	{
		int prod = 1;
		int temp = a;
		a = b;
		b = temp + b;
		int n = a;
		while (n > 0)
		{
			prod *= n % 10;
			n /= 10;
		}
		// check if prod is prime
		int flag = 0;
		if (prod <= 1)
			flag = 1;
		for (int j = 2; j <= prod / 2; j++)
		{
			if (prod % j == 0)
				flag = 1;
		}
		if (flag == 0)
			printf("%d ", a);
	}
	return 0;
}
