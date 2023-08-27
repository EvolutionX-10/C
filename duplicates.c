#include <stdio.h>

int main()
{
	int arr[] = {10, 9, 8, 10, 8, 7, 8, 10};
	int size = sizeof(arr) / sizeof(arr[0]);
	int piece[1][size];
	static int count;
	for (int i = 0; i < size; i++)
	{
		piece[0][i] = arr[i];
	}
	for (int i = 0; i < size; i++)
	{
		for (int j = 1; j < size - i; j++)
		{
			// printf("%d - %d\n", piece[0][j + i], arr[i]);
			if (piece[0][j + i] == arr[i])
			{
				count++;
				break;
			}
		}
	}

	printf("%d\n", count);
	return 0;
}