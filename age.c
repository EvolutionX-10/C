#include <stdio.h>
#include <time.h>

int main()
{
	// input date of birth
	int dd, mm, yy;
	printf("Enter date of birth (dd mm yyyy): ");
	scanf("%d %d %d", &dd, &mm, &yy);

	// calculate full age (days months years) from date of birth
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	int days = t->tm_mday - dd;
	int months = t->tm_mon + 1 - mm;
	int years = t->tm_year + 1900 - yy;
	if (days < 0)
	{
		months--;
		days += 30;
	}
	if (months < 0)
	{
		years--;
		months += 12;
	}

	// print age
	printf("Age is %d years %d months %d days", years, months, days);
	return 0;
}