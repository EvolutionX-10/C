#include <stdio.h>

int main() {
	int num;
	printf("Enter a number: ");
	scanf(" %d", &num);

	int prev = 0;
	int temp = num;
	while (temp > 0) {
		prev += 1;
		temp = temp / 10;
	}
	printf("%d digits in %d\n", prev, num);
	return 0;
}
