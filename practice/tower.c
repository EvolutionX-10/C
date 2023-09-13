#include <stdio.h>
// #include "func.h"

int main()
{
	int a;
	printf("Enter a number: ");
	scanf("%d", &a);
	int space = a - 1;

	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < space; j++)
		{
			printf(" ");
		}
		for (int k = 0; k <= i; k++)
		{
			printf("$ ");
		}
		printf("\n");
		space--;
	}
	// ask();
}
