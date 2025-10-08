#include <stdio.h>

int main()
{
	int x, y, z;
	printf("Int value of x: ");
	scanf("%d", &x);
	printf("Int value of y: ");
	scanf("%d", &y);
	z = x;
	x = y;
	y = z;
	printf("Value of x: %d\n", x);
	printf("Value of y: %d", y);
	return 0;
 } 
