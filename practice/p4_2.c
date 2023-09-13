#include <stdio.h>
#include <math.h>
int main()
{
	char choice;
	printf("Enter a choice: ");
	scanf(" %c", &choice);
	switch (choice) {
		case 'A': {
			float a, b;
			printf("Enter 2 numbers: ");
			scanf(" %f %f", &a, &b);
			float g = a > b ? a : b;
			float s = a > b ? b : a;
			printf("Sum: %.1f + %.1f = %.1f \n", a, b, a + b);
			printf("Difference: %.1f - %.1f = %.1f \n", a, b, a - b);
			printf("Product: %.1f * %.1f = %.1f \n", a, b, a * b);
			printf("Quotient: %.1f / %.1f = %.1f \n", g, s, g / s);
			printf("Remainder: %.1f %% %.1f = %.1f \n", g, s, fmod(g, s));
			break;
		}
		case 'B': {
			int a, b;
			printf("Enter 2 numbers: ");
			scanf(" %d %d", &a, &b);
			printf("Bitwise AND: %d & %d = %d \n", a, b, a & b);
			printf("Bitwise OR: %d | %d = %d \n", a, b, a | b);
			printf("Bitwise XOR: %d ^ %d = %d \n", a, b, a ^ b);
			break;
		}
		case 'C': {
			int a, b;
			printf("Enter 2 numbers: ");
			scanf(" %d %d", &a, &b);
			printf("Less than: %d < %d = %d \n", a, b, a < b);
			printf("Greater than: %d > %d = %d \n", a, b, a > b);
			printf("Equal to: %d == %d = %d \n", a, b, a == b);
			printf("Not equal to: %d != %d = %d \n", a, b, a != b);
			break;
		}
		case 'D': {
			int a;
			printf("Enter a number: ");
			scanf(" %d", &a);
			printf("%d is %s\n", a, a % 2 == 0 ? "even" : "odd");
			break;
		}
		default: {
			printf("Invalid choice!");
		}
	}
	return 0;
}
