#include <stdio.h>
/*
		A
	   B B
	  C D C
	 D E E D
*/
int main()
{
	int i, j, k, l = 0;
	int n;
	printf("Enter the number of rows: ");
	scanf(" %d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}
		for (k = 1; k <= i; k++)
		{
			if (i % 2 == 1)
			{
				if (k <= (i + 1) / 2)
					l++;
				else
					l--;
			}
			else
			{
				if (k < i / 2 + 1)
					l++;
				else if (k == i / 2 + 1)
					l = l;
				else
					l--;
			}
			if (i < 3) l = 1;
			printf("%c ", 63 + l + i);
		}
		l = 0;
		printf("\n");
	}
}