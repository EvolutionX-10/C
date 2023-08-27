// Write a C program to multiply a matrix of size m x n with a vector of size n x 1

#include <stdio.h>

int main()
{
	int m, n;
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d %d", &m, &n);
	int matrix[m][n];
	printf("Enter the elements of the matrix: ");
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			scanf("%d", &matrix[i][j]);
		}
	}
	int vector[n];
	printf("Enter the elements of the vector: ");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &vector[i]);
	}
	int result[m];
	for (int i = 0; i < m; i++)
	{
		result[i] = 0;
		for (int j = 0; j < n; j++)
		{
			result[i] += matrix[i][j] * vector[j];
		}
	}
	printf("The result is: ");
	for (int i = 0; i < m; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	return 0;
}