#include <stdio.h>

int main()
{
	// int A[][], B[][], C[][];
	
	int A[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int B[3][3] = { {3, 2, 1}, {6, 5, 4}, {9, 8, 7} };
	int C[3][3];

	//printf("Filling Matrix A\n");
	/*for (int i = 0; i < 3; i++) {
		printf("Enter Row %d: ", i + 1);
		scanf("%d %d %d", &A[i][0], &A[i][1], &A[i][2]);
	}
	
	printf("Filling Matrix B\n");
	for (int i = 0; i < 3; i++) {
		printf("Enter Row %d: ", i + 1);
		scanf("%d %d %d", &B[i][0], &B[i][1], &B[i][2]);
	}
	*/
	/*
	1 2 3		3 2 1
	4 5 6	x	6 5 4
	7 8 9		9 8 7
	*/
	
	// 1 2 3 . 3 6 9
	for (int i = 0; i < 3; i++) {
		int a = 0, k = 0, b = 0, c = 0;
		for (int j = 0; j < 3; j++) {
			a += A[i][j] * B[j][i];
			b += A[i][j] * B
		}
		printf("%d\n", a);
		C[i][k] = a;
		k++;
	}
	
	// PRINT matrix C
	for (int i = 0; i < 3; i++) {
		// printf("%d %d %d\n", C[i][0], C[i][1], C[i][2]);
	}
}
