#include <stdio.h>

int main()
{
	float area, base, height;
	printf("Base of the triangle: ");
	scanf("%f", &base);
	printf("Height of the triangle: ");
	scanf("%f", &height);
	area = 0.5*base*height;
	printf("Area of the triangle: %f", area);
}
