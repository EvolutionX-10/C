#include <stdio.h>

int getPercent(float m1, float m2, float m3, float m4, float m5);
int main()
{
	int m1, m2, m3, m4, m5, percent;

	printf("Enter m1, m2, m3, m4, m5\n");
	scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

	percent = getPercent(m1, m2, m3, m4, m5);
	char *result;

	if (percent < 40)
		result = "Fail";
	else if (percent >= 40 && percent < 50)
		result = "Third";
	else if (percent >= 50 && percent < 60)
		result = "Second";
	else
		result = "First";

	printf("Your result: %s\n\n", result);
	return 0;
}

int getPercent(float m1, float m2, float m3, float m4, float m5)
{
	return (((m1 + m2 + m3 + m4 + m5) / 500) * 100);
}
