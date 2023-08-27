#include <stdio.h>
#include <time.h>
int main()
{
	time_t now = time(NULL);
	struct tm *t = localtime(&now);
	int day = t->tm_wday;
	switch (day)
	{
	case 0:
		printf("Sunday");
		break;
	case 1:
		printf("Monday");
		break;
	case 2:
		printf("Tuesday");
		break;
	case 3:
		printf("Wednesday");
		break;
	case 4:
		printf("Thursday");
		break;
	case 5:
		printf("Friday");
		break;
	case 6:
		printf("Saturday");
		break;
	default:
		printf("Invalid day");
		break;
	}
	return 0;
}