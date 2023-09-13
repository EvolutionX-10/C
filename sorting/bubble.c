#include <stdio.h>

// implement bubble sort
void bubble_sort(int arr[], int n) // n is the size of the array
{
	int i, j, temp; // temp is a temporary variable
	for (i = 0; i < n - 1; i++) // n - 1 because we don't need to compare the last element
	{
		for (j = 0; j < n - i - 1; j++) // n - i - 1 because the last i elements are already in place
		{
			if (arr[j] > arr[j + 1]) // swap if the element is greater than the next element
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

int main()
{
	int arr[] = {5, 7, 13, 48, 35, 47, 12, 58, 95, 71};
	int n = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}