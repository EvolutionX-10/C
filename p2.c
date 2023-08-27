#include <stdio.h>
int getGross(float base, float hra, float da);

int main()
{
	int base, gross;

	printf("Enter your base salary: ");
	scanf(" %d", &base);

	if (base <= 4000)
		gross = getGross(base, 10, 50);
	else if (base > 4000 && base <= 8000)
		gross = getGross(base, 20, 60);
	else if (base > 8000 && base <= 12000)
		gross = getGross(base, 25, 70);
	else
		gross = getGross(base, 30, 80);

	printf("\nYour gross salary is %d\n\n", gross);
	return 0;
}

int getGross(float base, float hra, float da)
{
	return (base + ((hra / 100) * base) + ((da / 100) * base));
}
