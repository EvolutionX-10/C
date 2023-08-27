// Write a Program (Using Structure) to create a File named CRICK_FL which will store 
// information of 10 Cricketers. Each cricketer record is comprised as cricketer name, age, 
// test match played, runs in test match, ODI match Played, runs in ODI. Read the 
// CRICK_FL file display the content in it.


#include <stdio.h>
#define size 1

struct cricketer {
	char name[100];
	int age;
	int tests;
	int runs_tests;
	int odi;
	int runs_odi;
};

int main() {
	struct cricketer c[size];
	printf("Enter name, age, test matches, runs scored, ODI matches, runs scored\n");
	for (int i = 0; i < size; i++)
	{
		scanf(" %s %d %d %d %d %d", c[i].name, &c[i].age, &c[i].tests, &c[i].runs_tests, &c[i].odi, &c[i].runs_odi);
	}

	FILE *fp;
	fp = fopen("CRICK_FL.txt", "w");

	for (int i = 0; i < size; i++)
	{
		fprintf(fp, "Name: %s\n", c[i].name);
		fprintf(fp, "Age: %d\n", c[i].age);
		fprintf(fp, "Test Matches: %d\n", c[i].tests);
		fprintf(fp, "Runs in Tests: %d\n", c[i].runs_tests);
		fprintf(fp, "ODI Matches: %d\n", c[i].odi);
		fprintf(fp, "Runs in ODIs: %d\n", c[i].runs_odi);
		fprintf(fp, "\n------------------------------------------\n\n");
	}
	fclose(fp);
	fp = fopen("CRICK_FL.txt", "r");
	printf("\n\nDATA ENTERED\n\n");
	while (fp) {
		char ch = fgetc(fp);
		if (ch == EOF) break;
		printf("%c", ch);
	}

	fclose(fp);
	return 0;
}
