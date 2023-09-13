// Write a C program to create one user defined function to compute surface area and
// volume of a sphere. Print the output in main function. Do not use global variable. (
// Use Call by Reference)
#include <stdio.h>
#include <math.h>

void surfaceArea(int r, int *sa);
void volume(int r, int *v);

int main()
{
	int r;
	printf("Enter the radius of the sphere: ");
	scanf("%d", &r);
	int sa, v;
	surfaceArea(r, &sa);
	volume(r, &v);
	printf("Surface Area: %d and Volume: %d", sa, v);
	return 0;
}

void surfaceArea(int r, int *sa)
{
	*sa = 4 * M_PI * pow(r, 2);
}

void volume(int r, int *v)
{
	*v = (4 * M_PI * pow(r, 3)) / 3;
}