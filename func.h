#include "stdio.h"
void ask();
int main();

void ask() {
	printf("Retry? Y/N\n");
	char ans[1];
	scanf("%s", ans);
	if (ans[0] == 'Y' || ans[0] == 'y') main();
}

void printA(int a[], size_t size) {
	for (int i = 0; i < size; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}

void print(char *s) {
	printf("%s\n", s);
}
