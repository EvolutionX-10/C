#include <stdio.h>

int main()
{
	int arr[5] = {0, 1, 2, 3, 4};

	int pos = 3;

	for (int i = pos - 1; i < 5 - 1; i++)
	{
		arr[i] = arr[i+1];
	}
	for (int i = 0; i < 5 - 1; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}