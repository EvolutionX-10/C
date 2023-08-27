#include <stdio.h>
// copy source string to other string using pointer
int main()
{
	int arr[5];
	for (int a = 0; a < 5; a++) {
		printf("Enter element %d: ", a + 1);
		scanf(" %d", &arr[a]);
	}

	for (int i = 0; i < 5; i++)
	{
		int min = i;
		for (int j = i + 1; j < 5; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		int temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}
