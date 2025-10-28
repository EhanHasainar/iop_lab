#include<stdio.h>

int main()
{
	int max, min, i, n, num;
	
	printf("Enter how many numbers: ");
	scanf("%d", &n);
	
	printf("Enter number 1: ");
	scanf("%d", &num);
	
	max = num;
	min = num;
	
	for(i=2; i<=n; i++){
		printf("Enter number %d: ", i);
		scanf("%d", &num);
		
		if (num>max)
			max = num;
		if (num<min)
			min = num;	
	}
	
	printf("\nMaximum number = %d", max);
	printf("\nMinimum number = %d", min);
	
	return 0;
}
