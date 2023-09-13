#include <stdio.h>

/*
  1 2 3 4 5 6 7 8 9 x
1 *	* * * * * * * *
2 * *           * *
3 *   *       *   *
4 *     *   *     *
5 *       *       *
6 *     *   *     *
7 *   *       *   *
8 * *           * *
9 *	* * * * * * * *
y
*/

int main()
{
	int x, y, m = 23, n = 23;
	for (y = 1; y <= n; y++)
	{
		for (x = 1; x <= m; x++)
		{
			// printf("(%d,%d)\t\t\t", x, y);
			// printf("%d\t", x + y);
			if (y == 1 || y == n || x == 1 || x == m || x + y == m + 1 || x == y)
			// if (y == 1 || y == n || x == 1 || x == m || (x == xMid && y == yMid) || (x == (1 + xMid) / 2 && y == (1 + yMid) / 2) || (x == (m + xMid) / 2 && y == (n + yMid) / 2) || (x == (1 + xMid) / 2 && y == (n + yMid) / 2) || (x == (m + xMid) / 2 && y == (1 + yMid) / 2))
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
}