#include <stdio.h>

void input(int a, int b, int mat[10][10])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("[%d - %d]: ", i, j);
			scanf(" %d", &mat[i][j]);
		}
	}
}

void print(int a, int b, int mat[10][10])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
}

void trans(int a, int b, int mat[10][10], int result[10][10])
{
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < b; j++)
		{
			result[i][j] = mat[j][i];
		}
	}
}

int main()
{
	int a, b;
	printf("Enter the dimensions of the matrix: ");
	scanf(" %d %d", &a, &b);

	int mat[a][b];
	input(a, b, mat);
	printf("Before transpose:\n");
	print(a, b, mat);

	int result[a][b];
	trans(a, b, mat, result);
	printf("After transpose:\n");
	print(a, b, result);

	return 0;
}