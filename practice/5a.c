#include <stdio.h>
#define SIZE 5

int main()
{
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++)
	{
		int num;
		printf("Enter Number [%d]: ", i + 1);
		scanf("%d", &num);
		arr[i] = num * num;
	}

	int left = 0;
	int right = (sizeof(arr) / sizeof(arr[0])) - 1;

	printf("Array formed: [");
	for (int i = 0; i < SIZE; i++)
	{
		printf("%d%s", arr[i], i == SIZE - 1 ? "" : ", ");
	}
	printf("]\n");

	printf("Enter Search Term: ");
	int element;
	scanf("%d", &element); // Search element
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == element)
		{
			printf("Element %d found at position %d [Index %d]\n", element, mid + 1, mid);
			return mid;
		}
		else if (arr[mid] < element)
			left = mid + 1;
		else
			right = mid - 1;
	}
	printf("Element %d Not Found!\n", element);
	return 0;
}
