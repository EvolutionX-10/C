/*
	E
	E D
	E D C
	E D C B
	E D C B A
*/
#include <stdio.h>

int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", 'E' - j);
		}
		printf("\n");
	}
	return 0;
}
