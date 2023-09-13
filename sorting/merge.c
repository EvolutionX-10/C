#include <stdio.h>

// implement merge sort
void merge(int arr[], int l, int m, int r) // l is the index of the first element, m is the index of the middle element, r is the index of the last element
{
	int i, j, k; // i is the index of the first subarray, j is the index of the second subarray, k is the index of the merged subarray
	int n1 = m - l + 1; // n1 is the size of the first subarray
	int n2 = r - m; // n2 is the size of the second subarray

	// create temp arrays
	int L[n1], R[n2]; // L is the first subarray, R is the second subarray

	// copy data to temp arrays L[] and R[]
	for (i = 0; i < n1; i++) // copy the first subarray
		L[i] = arr[l + i]; // l + i is the index of the first element of the first subarray
	for (j = 0; j < n2; j++) // copy the second subarray
		R[j] = arr[m + 1 + j]; // m + 1 + j is the index of the first element of the second subarray

	// merge the temp arrays back into arr[l..r]
	i = 0; // initial index of first subarray
	j = 0; // initial index of second subarray
	k = l; // initial index of merged subarray
	while (i < n1 && j < n2) // while there are elements in both subarrays
	{
		if (L[i] <= R[j]) // if the element in the first subarray is smaller than the element in the second subarray
		{
			arr[k] = L[i]; // copy the element from the first subarray to the merged subarray
			i++; // move to the next element in the first subarray
		}
		else
		{
			arr[k] = R[j]; // copy the element from the second subarray to the merged subarray
			j++; // move to the next element in the second subarray
		}
		k++; // move to the next element in the merged subarray
	}

	// copy the remaining elements of L[], if there are any
	while (i < n1) // if there are elements in the first subarray
	{
		arr[k] = L[i]; // copy the element from the first subarray to the merged subarray
		i++; // move to the next element in the first subarray
		k++; // move to the next element in the merged subarray
	}


	// copy the remaining elements of R[], if there are any
	while (j < n2) 
	{
		arr[k] = R[j]; // copy the element from the second subarray to the merged subarray
		j++; // move to the next element in the second subarray
		k++; // move to the next element in the merged subarray
	}
}

// l is for left index and r is right index of the sub-array of arr to be sorted
void merge_sort(int arr[], int l, int r)
{
	if (l < r) // if there is more than one element
	{
		// same as (l+r)/2, but avoids overflow for large l and h
		int m = l + (r - l) / 2;

		// sort first and second halves
		merge_sort(arr, l, m); // sort the first subarray
		merge_sort(arr, m + 1, r); // sort the second subarray

		merge(arr, l, m, r); // merge the two sorted subarrays
	}
}

int main()
{
	int arr[] = {5, 7, 13, 48, 35, 47, 12, 58, 95, 71};
	int n = sizeof(arr) / sizeof(arr[0]);
	merge_sort(arr, 0, n - 1);
	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);
	return 0;
}