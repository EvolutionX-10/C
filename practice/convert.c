#include <stdio.h>

int main()
{
	char c;
	printf("Enter a character: ");
	scanf(" %c", &c);

	printf("%c is new character!\n", c <= 'z' && c >= 'a' ? c - 32 : c + 32);
	return 0;
}
