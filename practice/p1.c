#include <stdio.h>

int main()
{
	int cusID, pNo, pQ;
	float cost;
	char add[100], name[100];

	printf("Enter your customer ID: ");
	scanf("%d", &cusID);
	printf("Enter your address: ");
	scanf("%s", add);
	printf("Enter your Product name: ");
	scanf("%s", name);
	printf("Enter your Product Number: ");
	scanf("%d", &pNo);
	printf("Enter quantity of product %s: ", name);
	scanf("%d", &pQ);
	printf("Enter the %s cost: ", name);
	scanf("%f", &cost);

	// calculate amount
	float amt = ((cost * pQ) + 0.1 * (cost * pQ));
	printf("\nHello! You have to pay $%d for the purchase of your %d %s\n", (int)amt, pQ, name);
	printf("Customer ID: %d\nAddress: %s\nProduct No: %d\nProduct: %s [x%d]\n", cusID, add, pNo, name, pQ);

	return 0;
}
