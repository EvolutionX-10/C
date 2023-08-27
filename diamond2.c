#include <stdio.h>
#include <stdlib.h>

/*
  1 2 3 4 5 6 7 8 9 x
1  	      *
2       *   *
3     *       *
4   *           *
5 *               *
6   *           *
7     *       *
8       *   *
9 	      *
y
*/

// use only 2 loops
int main()
{
	int x, y;
	int n = 9;
	int mid = n / 2 + 1;
	int a = n % 2;
	for (y = 1; y <= n; y++)
	{
		for (x = 1; x <= n; x++)
		{
			// printf("%d ", x + y);
			if ((y <= mid && (mid + y - a == x || mid + a == x + y)) || (y > mid && (mid + x - a == y || mid + n == x + y)))
			{
				printf("* ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}