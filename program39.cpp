#include<stdio.h>

int main()
{
	int i, n, j, fact;
	float sum=0.0;
	
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		fact = 1;
		for(j=1; j<=i; j++)
		{
			fact=fact*j;
		}
		
		sum = sum + float(i)/fact;
	}
	
	printf("The total sum = %f", sum);
	return 0;
}
