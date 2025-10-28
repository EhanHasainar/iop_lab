#include<stdio.h>

int main()
{
	int i=1, n, sqr;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	for(i; i<=n; i++)
	{
		sqr = i*i;
		printf("%d ", sqr);
	}
	
	return 0;
}
