#include <stdio.h>
#include "func.h"
#define size 2
#define subsize 3

struct student
{
	char name[100];
	int subject[subsize];
};

int main()
{
	struct student s[size];
	for (int i = 0; i < size; i++)
	{
		printf("[%d] Enter name: ", i + 1);
		scanf(" %s", s[i].name);
		for (int j = 0; j < subsize; j++)
		{
			printf("[%d] Enter your subject %d marks: ", i + 1, j + 1);
			scanf(" %d", &s[i].subject[j]);
		}
	}

	print("Got the data, displaying the output marks\n\n------------------------------------------\n");

	for (int i = 0; i < size; i++)
	{
		printf("Name: \t\t\t%s\n", s[i].name);
		for (int j = 0; j < subsize; j++)
		{
			printf("Subject %d marks: \t%d\n", j + 1, s[i].subject[j]);
		}
	}

	return 0;
}
