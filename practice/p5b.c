#include <stdio.h>

int main()
{
	int r1, c1, c2;
	printf("Enter r1, c1, c2: ");
	scanf("%d %d %d", &r1, &c1, &c2);
	// take input of 2 matrix
	int A[r1][c1];
	int B[c1][c2];
	printf("Enter matrix A:\n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c1; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter matrix B:\n");
	for (int i = 0; i < c1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	int C[r1][c2];
	// multiplication
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < c1; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("Resultant Matrix:\n");
	for (int i = 0; i < r1; i++)
	{
		for (int j = 0; j < c2; j++)
		{
			printf("%d ", C[i][j]);
		}
		printf("\n");
	}
	return 0;
}
