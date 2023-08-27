#include <stdio.h>
#include "func.h"

int main()
{
	int year;
	printf("Enter any year: ");
	scanf("%d", &year);

	year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)
		? printf("%d is Leap!\n", year)
		: printf("%d is Not Leap\n", year);
	ask();
	return 0;
}
