#include <stdio.h>
int main() {
	int choice;
	printf("Enter choice code: ");
	scanf(" %d", &choice);
	switch (choice) {
	case 1: {
		int num, r;
		printf("Enter a number: ");
		scanf(" %d", &num);
		int prev = 0, temp = num;
		while (temp > 0) {
			r = temp % 10;
			prev = prev > r ? prev : r;
			temp /= 10;
		}
		printf("%d is largest digit in %d\n", prev, num);
		break;
	}
	case 2: {
		int num, r, sum = 0;
		printf("Enter a number: ");
		scanf(" %d", &num);
		int temp = num;
		while (temp > 0) {
			r = temp % 10;
			sum += (r * r * r);
			temp /= 10;
		}
		sum == num ? printf("Armstrong!\n")
				   : printf("Not Armstrong!\n");
		break;
	}
	case 3: {
		char c;
		printf("Enter a character: ");
		scanf(" %c", &c);
		printf("%c is new character!\n", c <= 'z' && c >= 'a' ? c - 32 : c + 32);
		break;
	}
	case 4: {
		printf("Error!\n");
		return 1;
	}
	default:
		printf("Invalid choice!\n");
	}
	return 0;
}