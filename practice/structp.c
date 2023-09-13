#include <stdio.h>
#include <stdlib.h>

struct person
{
	char name[100];
	int age;
	float salary;
};

int main()
{
	struct person *p;
	p = (struct person *)malloc(sizeof(struct person));
	printf("Enter the name: ");
	scanf(" %s", p->name);
	printf("Enter the age: ");
	scanf(" %d", &p->age);
	printf("Enter the salary: ");
	scanf(" %f", &p->salary);
	printf("Name: %s Age: %d Salary: %f", p->name, p->age, p->salary);
	return 0;
}