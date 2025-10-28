#include<stdio.h>

int main()
{
	int i=1, n;
	printf("Enter the value of n: ");
	scanf("%d", &n);
	
	while(i<=n)
	{
		if(i%2==0)
		{
			printf("%d ", i);
		}
		i = i+1;
	}
	return 0;
}
