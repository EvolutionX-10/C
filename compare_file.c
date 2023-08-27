#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	char ch1, ch2;
	int line = 1, pos = 1;

	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "r");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("Error opening file");
		return 0;
	}

	while (1)
	{
		ch1 = fgetc(fp1);
		ch2 = fgetc(fp2);

		if (ch1 == EOF && ch2 == EOF)
			break;

		if (ch1 != ch2)
		{
			printf("Files are not same at line %d and position %d", line, pos);
			break;
		}
		if (ch1 == '\n') {
			line++;
			pos = 0;
		}
		else pos++;
	}
	return 0;
}