#include <stdio.h>
/*
1
2 3
4 5 6
7 8 9 10
*/
// int main()
// {
// 	int n = 1;
// 	for (int i = 0; i < 4; i++)
// 	{
// 		for (int j = 0; j <= i; j++)
// 		{
// 			printf("%d ", n++);
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

/*
	  *
    * * *
  * * * * *
* * * * * * *
*/
// int main()
// {
//   int n = 6;
// 	for (int i = 0; i <= n; i++)
// 	{
// 		for (int j = 0; j < n; j++)
// 		{
// 			printf("  ");
// 		}
// 		n--;
// 		for (int j = 0; j <= 2 * i; j++)
// 		{
// 			printf("$ ");
// 		}
// 		printf("\n");
// 	}
// 	return 0;
// }

/*
A B C B A
  A B A
    A
*/
int main()
{
	int n = 3;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i; j++) printf("  ");
		for (int j = 0; j < n - i; j++) printf("%c ", 65 + j);
		for (int j = n - i - 2; j >= 0; j--) printf("%c ", 65 + j);
		printf("\n");
	}
	return 0;
}