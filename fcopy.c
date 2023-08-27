#include <stdio.h>

int main()
{
	FILE *fp1, *fp2;
	char ch1;

	fp1 = fopen("file1.txt", "r");
	fp2 = fopen("file2.txt", "w");

	if (fp1 == NULL || fp2 == NULL)
	{
		printf("Error opening file");
		return 0;
	}

	while (1)
	{
		ch1 = fgetc(fp1);

		if (ch1 == EOF)
			break;
		fputc(ch1, fp2);
	}
	fclose(fp1);
	fclose(fp2);

	return 0;
}