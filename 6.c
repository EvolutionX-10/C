#include <stdio.h>
int main() {
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	int f, t = n, l = n % 10;
	while (t > 0)
	{
		f = t % 10;
		t /= 10;
	}
	printf("Sum of first and last digit is %d\n", f + l);
	return 0;
}