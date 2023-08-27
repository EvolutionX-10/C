#include <stdio.h>

// implement insertion sort
void insertion_sort(int arr[], int n) // n is the size of the array
{
	int i, j, temp; // temp is a temporary variable
	for (i = 1; i < n; i++) // start from the second element
	{
		temp = arr[i]; // store the current element in a temporary variable
		j = i - 1; // start comparing with the previous element
		while (j >= 0 && arr[j] > temp) // if the previous element is greater than the current element
		{
			arr[j + 1] = arr[j]; // move the previous element to the next position
			j--; // compare with the previous element
		}
		arr[j + 1] = temp; // insert the current element in the correct position
	}
}

int main()
{
	int arr[] = {5, 7, 13, 48, 35, 47, 12, 58, 95, 71};
	int n = sizeof(arr) / sizeof(arr[0]);
	insertion_sort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}
