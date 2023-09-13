// create a username and password prompt
// username is Aakhyan and password is 123
// if username is wrong, print "Invalid username"
// if password is wrong, print "Invalid password"
// if username is wrong, do not ask for password, instead ask username again
// if both are write, print a welcome message

#include <stdio.h>
#include <string.h>

int main()
{
	char username[100];
	char password[100];
	int flag = 0;
	while (flag == 0)
	{
		printf("Enter username: ");
		scanf("%s", username);
		if (strcmp(username, "Aakhyan") == 0)
		{
			printf("Enter password: ");
			scanf("%s", password);
			if (strcmp(password, "123") == 0)
			{
				printf("Welcome!\n");
				flag = 1;
			}
			else
				printf("Invalid password\n");
		}
		else
			printf("Invalid username\n");
	}
}