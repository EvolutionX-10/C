#include <stdio.h>

int main()
{
	int num;
	printf("Enter any number: ");
	scanf("%d", &num);

	// print fibonacci series till num
	int a = 0, b = 1, c;
	printf("%d %d ", a, b);
	for (int i = 2; i < num; i++)
	{
		c = a + b;
		printf("%d ", c);
		a = b;
		b = c;
	}
	return 0;
}