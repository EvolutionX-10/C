#include <stdio.h>

struct point
{
	int x,y,z;
};

int f1 (int  b) {
	if (b==0) return 0;
	else {
		printf("a");
		f1(b--);
	}
}

int main()
{
	int a;
	a = f1(10);
	printf("%d", a);
	return 0;
}

