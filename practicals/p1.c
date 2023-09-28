#include <stdio.h>
#include <stdlib.h>

// create adt array
// implement traverse, insert_element, delete_element, sort, search, modify
// create a menu driven program to test the adt

struct array
{
	int a[100];
	int length;
};

void traverse(struct array *arr)
{
	printf("Elements in array are: ");
	for (int i = 0; i < arr->length; i++)
	{
		printf("%d ", arr->a[i]);
	}
	printf("\n");
}

void insert_element(struct array *arr, int element, int position)
{
	if (position >= 0 && position <= arr->length)
	{
		for (int i = arr->length; i > position; i--)
		{
			arr->a[i] = arr->a[i - 1];
		}
		arr->a[position] = element;
		arr->length++;
	}
	else
	{
		printf("Invalid position\n");
	}
}

void delete_element(struct array *arr, int position)
{
	if (position >= 0 && position < arr->length)
	{
		for (int i = position; i < arr->length; i++)
		{
			arr->a[i] = arr->a[i + 1];
		}
		arr->length--;
	}
	else
	{
		printf("Invalid position\n");
	}
}

void sort(struct array *arr)
{
	int temp;
	for (int i = 0; i < arr->length - 1; i++)
	{
		for (int j = 0; j < arr->length - i - 1; j++)
		{
			if (arr->a[j] > arr->a[j + 1])
			{
				temp = arr->a[j];
				arr->a[j] = arr->a[j + 1];
				arr->a[j + 1] = temp;
			}
		}
	}
}

int search(struct array *arr, int element)
{
	for (int i = 0; i < arr->length; i++)
	{
		if (arr->a[i] == element)
		{
			return i;
		}
	}
	return -1;
}

void modify(struct array *arr, int element, int position)
{
	if (position >= 0 && position < arr->length)
	{
		arr->a[position] = element;
	}
	else
	{
		printf("Invalid position\n");
	}
}

int main()
{
	struct array arr;
	int element, choice, position, x;
	printf("Enter number of elements in array: ");
	scanf("%d", &arr.length);
	for (int i = 0; i < arr.length; i++)
	{
		printf("Enter the element for a[%d]: ", i);
		scanf("%d", &arr.a[i]);
	}
	while (1)
	{
		printf("Enter 1 to traverse\n");
		printf("Enter 2 to insert element\n");
		printf("Enter 3 to delete element\n");
		printf("Enter 4 to sort\n");
		printf("Enter 5 to search\n");
		printf("Enter 6 to modify\n");
		printf("Enter 7 to exit\n");
		printf("Enter your choice: ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			traverse(&arr);
			break;
		case 2:
			printf("Enter the element to be inserted: ");
			scanf("%d", &element);
			printf("Enter the position: ");
			scanf("%d", &position);
			insert_element(&arr, element, position);
			break;
		case 3:
			printf("Enter the position: ");
			scanf("%d", &position);
			delete_element(&arr, position);
			break;
		case 4:
			sort(&arr);
			traverse(&arr);
			break;
		case 5:
			printf("Enter the element to be searched: ");
			scanf("%d", &element);
			x = search(&arr, element);
			if (x == -1)
			{
				printf("Element not found\n");
			}
			else
			{
				printf("Element found at %d\n", x);
			}
			break;
		case 6:
			printf("Enter the element to be modified: ");
			scanf("%d", &element);
			printf("Enter the position: ");
			scanf("%d", &position);
			modify(&arr, element, position);
			break;
		case 7:
			exit(0);
		default:
			printf("Invalid choice\n");
		}
	}
}