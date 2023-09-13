#include <stdio.h>
int main()
{
	char name[100]; int units; double charges;
	printf("Enter the name of the user: ");
	scanf("%s", name);
	printf("Enter the no. of units consumed: ");
	scanf("%d", &units);

	// Calculate the charges
	charges = units <= 200 ? units * 0.8 : units <= 300 ? 200 * 0.8 + (units - 200) * 0.9
														: 200 * 0.8 + 100 * 0.9 + (units - 300) * 1;
	charges += 100;
	charges += charges > 400 ? charges * 0.15 : 0;

	printf("The charges for %s are: %.2f\n", name, charges);
	return 0;
}
