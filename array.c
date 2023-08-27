#include <stdio.h>
#include <string.h>
int main()
{
	char t[] = "hello";
	// char t[]; ! Incorrect
	// char t[100]; ! Correct
	// char t[] = "hello world"; ! Correct
	printf("Enter a string: ");
	scanf("%s", t);

	char rev[strlen(t)];
	for (int i = 0; i < strlen(t); i++)
	{
		rev[strlen(t) - i - 1] = t[i];
	}
	printf("Reversed String: %s\n", rev);
	return 0;
}
