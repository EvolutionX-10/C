#include <stdio.h>

// implement selection sort
void selection_sort(int arr[], int n) // n is the size of the array
{
	int i, j, min, temp; // temp is a temporary variable
	for (i = 0; i < n - 1; i++) // n - 1 because we don't need to compare the last element
	{
		min = i; // assume the first element is the smallest
		for (j = i + 1; j < n; j++) // start comparing from the second element
		{
			if (arr[j] < arr[min]) // if the element is smaller than the current minimum
				min = j; // update the minimum
		}
		temp = arr[i]; // swap the minimum element with the first element
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int main()
{
	int arr[] = {5, 7, 13, 48, 35, 47, 12, 58, 95, 71};
	int n = sizeof(arr) / sizeof(arr[0]);
	selection_sort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
