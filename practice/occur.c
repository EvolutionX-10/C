#include <stdio.h>

int occurence(int n, int d) {
	static int count;
	if (n == 0)
		return count;
	else {
		if (n % 10 == d)
			count++;
		return occurence(n / 10, d);
	}
}

int main() {
	int n, d;
	printf("Enter the number: ");
	scanf(" %d", &n);
	printf("Enter the digit: ");
	scanf(" %d", &d);
	printf("Occurence of %d in %d is %d", d, n, occurence(n, d));
	return 0;
}