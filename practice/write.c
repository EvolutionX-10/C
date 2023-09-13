#include <stdio.h>

int main()
{
	char name[100];
	printf("Enter file name: ");
	scanf(" %[^\n]s", name);
	char statement[100];
	printf("Enter statement: ");
	scanf(" %[^\n]", statement);
	FILE *f = fopen(name, "w");

	fputs(statement, f);
	fclose(f);
	printf("File written successfully.\n");
	return 0;
}