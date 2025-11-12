#include<stdio.h>

int main()
{
	int arr[10], i, sum = 0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<10; i++)
	{
		sum = sum + arr[i];
	}
	
	printf("Sum of the intergers in the array is %d", sum);
	
	return 0;
}
