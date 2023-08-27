#include <stdio.h>

// Write a user define function to check two strings are equal or not (by using pointer)
int check(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
			return 0;
		s1++; s2++;
	}
	if (*s1 == '\0' && *s2 == '\0')
		return 1;
	return 0;
}

int main()
{
	char s1[100], s2[100];
	printf("Enter two strings: ");
	scanf(" %s %s", s1, s2);
	int result = check(s1, s2);
	printf("\"%s\" and \"%s\" %s equal!\n", s1, s2, result ? "are" : "are not");
	return 0;
}