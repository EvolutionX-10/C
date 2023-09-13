#include <stdio.h>

int main()
{
	int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	/*
		1 2 3
		4 5 6
		7 8 9
	*/
	// int B[3][3];
	/*
		1 4 7
		2 5 8
		3 6 9
	*/
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i < j)
			{
				int temp = A[i][j];
				A[i][j] = A[j][i];
				A[j][i] = temp;
				// B[i][j] = A[j][i]
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", A[i][j]);
		}
		printf("\n");
	}
	return 0;
}