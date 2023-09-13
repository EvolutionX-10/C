/*
Write Program to store information of 10 Bank Customers (Use Structure).
Customer’s information comprised as name, account number, PAN card number, and
Balance. Display the information of customer whose bank balance is less than 5000
*/
#include <stdio.h>
#define size 10
struct customer
{
	char name[100];
	int account_number;
	char pan_card_number[100];
	int balance;
};
int main()
{
	struct customer c[size];
	for (int i = 0; i < size; i++)
	{
		printf("Enter name, account number, pan number, balance: ");
		scanf(" %s %d %s %d", c[i].name, &c[i].account_number, c[i].pan_card_number, &c[i].balance);
	}
	for (int i = 0; i < size; i++)
	{
		if (c[i].balance < 5000)
		{
			printf("Name: %s\n", c[i].name);
			printf("Account number: %d\n", c[i].account_number);
			printf("PAN card number: %s\n", c[i].pan_card_number);
			printf("Balance: %d\n", c[i].balance);
		}
	}
	return 0;
}
