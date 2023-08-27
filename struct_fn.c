// write a c program to take a structure as a function argument
#include <stdio.h>
#include <string.h>
struct student
{
	char name[100];
	int roll;
	float marks;
};
void display(struct student s)
{
	printf("Name: %s\n", s.name);
	printf("Roll: %d\n", s.roll);
	printf("Marks: %.2f\n", s.marks);
}
int main()
{
	struct student s;
	printf("Enter name: ");
	scanf(" %[^\n]", s.name);
	printf("Enter roll: ");
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	scanf("%f", &s.marks);
	display(s);
	return 0;
}