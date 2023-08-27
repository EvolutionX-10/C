#include <stdio.h>
// Floyd triangle
int main()
{
	int a, n = 1;
	printf("Enter a number: ");
	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= a; j++)
		{
			printf("%d  ", n);
			n++;
			if (i == j)
				break;
		}
		printf("\n");
	}
}
