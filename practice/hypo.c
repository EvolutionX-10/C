#include <stdio.h>
#include <math.h>

int main() {
	int a, b, c;
	printf("Enter Side A: ");
	scanf("%d", &a);
	printf("Enter Side B: ");
	scanf("%d", &b);

	c = sqrt(a*a + b*b);

	printf("Hypotenuse of the triangle is %d\n", c);
	return 0;
}
