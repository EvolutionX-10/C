#include <stdio.h>

int main()
{
	char string[200];
	printf("Enter a string: ");
	scanf(" %s", string);

	static int chars, nums, specials;
	for (int i = 0; string[i] != '\0'; i++)
	{
		if ((string[i] >= 'a' && string[i] <= 'z') || (string[i] >= 'A' && string[i] <= 'Z'))
			chars++;
		else if (string[i] >= '0' && string[i] <= '9')
			nums++;
		else
			specials++;
	}

	printf("Number of characters: %d\n", chars);
	printf("Number of numbers: %d\n", nums);
	printf("Number of special characters: %d\n", specials);
	return 0;
}