/*
Write a C program to read the value of X and number of terms n and compute the
sum of following series.
X + XX + XXX + XXXX + ...

(e. g. number of term is 4 and X= 6 then sum of series is 6 + 66 + 666 + 6666 = 7404)
*/

#include <stdio.h>

int main()
{
	int x, n;
	printf("Enter the value of X and no. of terms: ");
	scanf(" %d %d", &x, &n);

	int sum = 0, temp = x;
	for (int i = 0; i < n; i++)
	{
		sum += temp;
		temp = temp * 10 + x;
	}
	printf("Sum of series is %d\n", sum);
	return 0;
}
