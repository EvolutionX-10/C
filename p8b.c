// Write a program in C to count a number of lines, characters and tabs or blanks in a file.

#include <stdio.h>

int main() {
	FILE *fp;
	char name[10];
	char ch;
	static int nol, c, t, space;
	printf("Please enter the file name: ");
	scanf(" %s", name);

	fp = fopen(name, "r");

	while (fp) {
		ch = fgetc(fp);
		if (ch == EOF) break; 
		if (ch == ' ') space++;
		else if (ch == '\n') nol++;
		else if (ch == '\t') t++;
		else c++;
	}
	fclose(fp);
	printf("Number of spaces: %d\n", space);
	printf("Number of lines: %d\n", nol);
	printf("Number of Tabs: %d\n", t);
	printf("Number of characters: %d\n", c);
	return 0;
}
