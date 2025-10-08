#include <stdio.h>

int main()
{
	float fah,cent;
	printf("Temperature in Fahrenheit: ");
	scanf("%f", &fah);
	cent = ((fah-32)*5)/9;
	printf("Temperature in centigrade: %f", cent);
	return 0;
}
