#include <stdio.h>

int main()
{
	// input gross salary
	float gross;
	printf("Enter gross salary: ");
	scanf("%f", &gross);

	// calculate tax using switch
	float tax;
	char *slab;
	float percent;
	switch ((int)gross / 500001)
	{
	case 0:
		tax = 0;
		percent = 0;
		slab = "Slab 1";
		break;
	case 1:
		percent = 0.1;
		tax = gross * percent;
		slab = "Slab 2";
		break;
	case 2:
		percent = 0.15;
		tax = gross * percent;
		slab = "Slab 3";
		break;
	case 3:
		percent = 0.2;
		tax = gross * percent;
		slab = "Slab 4";
		break;
	default:
		percent = 0.25;
		tax = gross * percent;
		slab = "Slab 5";
	}

	// print tax
	printf("Tax is %.0f\nYou are in %s, and you pay %.0f%% tax", tax, slab, percent * 100);
	return 0;
}