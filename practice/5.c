#include <stdio.h>

int main()
{
	int list[] = {5, 7, 13, 28, 35, 47, 55, 58, 65, 71};
	int left = 0;
	int right = sizeof(list) - 1;
	int element = 65; // Search element
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (list[mid] == element)
		{
			printf("%d\n", mid);
			return mid;
		}
		else if (list[mid] < element)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return 0;
}
