#include<stdio.h>

int main()
{
	int i, num, x=0, factors=0;
	
	printf("Enter a number: ");
	scanf("%d", &num);
	
	if (num%2!=0)
	{
		x = 1;
	}
	
	for (i=1; i<=(num+x)/2; i++)
	{
		if (num%i==0)
		{
			factors = factors + 1;
		}
	}
	
	if (factors==1)
	{
		printf("It is a prime number");
	}
	
	else
	{
		printf("It is a composite number");
	}
	
	return 0;
}
