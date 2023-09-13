#include <stdio.h>
int main()
{
	int marks;
	printf("Enter student's marks: ");
	scanf("%d", &marks);
	switch (marks / 10)
	{
	case 0:
	case 1:
	case 2:
	case 3:
		printf("%s\n", marks < 35 ? "F" : "C");
		break;
	case 4:
	case 5:
		printf("%s\n", marks < 55 ? "C" : "B");
		break;
	case 6:
	case 7:
		printf("%s\n", marks < 75 ? "B" : "A");
		break;
	case 8:
	case 9:
		printf("%s\n", marks < 95 ? "A" : "Invalid Input");
		break;
	default:
		printf("Invalid Input\n");
	}
	return 0;
}
