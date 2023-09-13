#include <stdio.h>

int main()
{
	static int i, j, temp;
	printf("Enter i and j: ");
	scanf("%d %d", &i, &j);
	temp = i;
	i = j;
	j = temp;
	/*
	a = a + b; 
	b = a - b;
	a = a - b;
	*/

	printf("i = %d, j = %d\n", i, j);
	return 0;
}