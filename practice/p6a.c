#include <stdio.h>
#include <string.h>

int palindrome(char *);
int main()
{
	// check whether the string is palindrome or not
	printf("Enter a word: ");
	char word[100];
	scanf(" %s", word);

	int result = palindrome(word);
	printf("\"%s\" %s Palindrome!\n", word, result ? "is" : "is not");
	return 0;
}

int palindrome(char *s)
{
	for (int i = 0; i < strlen(s); i++)
	{
		if (s[i] != s[strlen(s) - i - 1])
			return 0;
	}
	return 1;
}
