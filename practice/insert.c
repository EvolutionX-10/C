#include <stdio.h>
#include <stdlib.h>

int main()
{
	int arr[5] = {0, 1, 2, 3, 4};

	int last = sizeof(arr) / sizeof(arr[0]) - 1;
	int add = 5;

	arr[last + 1] = add;
	for (int i = 0; i < 6; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}