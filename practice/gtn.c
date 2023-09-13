// write a guess the number game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int num = rand() % 100 + 1;
	int guess;
	int count = 0;
	do
	{
		printf("Guess the number: ");
		scanf(" %d", &guess);
		if (guess > num)
		{
			printf("Too high try again \n");
		}
		else if (guess < num)
		{
			printf("Too low try again \n");
		}
		count++;
	} while (guess != num);
	printf("You guessed it in %d tries \n", count);
	return 0;
}