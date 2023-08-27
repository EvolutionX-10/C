#include <stdio.h>

int main()
{
	int n, m;
	printf("Enter size of array A and B: ");
	scanf(" %d %d", &n, &m);

	int a[n], b[m];
	printf("Enter elements of array A: ");
	for (int i = 0; i < n; i++)
		scanf(" %d", &a[i]);
	printf("Enter elements of array B: ");
	for (int i = 0; i < m; i++)
		scanf(" %d", &b[i]);

	int v = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			int diff = j - i;
			for (int k = 0; k < m; k++)
			{
				if (diff == b[k])
				{
					v += a[j] - a[i];
					break;
				}
			}
		}
	}

	printf("%d", v);
	return 0;
}