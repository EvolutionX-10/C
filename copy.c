#include <stdio.h>
#include <string.h>
#define size 500
void copy(char *, char *);

int main()
{
	char s[size], c[size];
	printf("Enter a string: ");
	scanf(" %s", s);
	
	copy(s, c);
	printf("Copied string: \"%s\"\n", c);
}

void copy(char *s, char *r)
{
	int len = strlen(s);
	for (int i = 0; i < len; i++) r[i] = s[i];
}
