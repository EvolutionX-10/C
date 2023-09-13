#include <stdio.h>

int main()
{
	FILE *fp;
	fp = fopen("file.txt", "w+");
	fputs("This is programming subject", fp);

	fseek(fp, 7, SEEK_SET);
	fputs(" C language", fp);
	fclose(fp);
	return 0;
}