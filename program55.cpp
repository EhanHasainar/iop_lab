#include<stdio.h>

int main()
{
	int arr[10], i, odd = 0, even = 0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(arr[i]%2==0)
		{
			even = even + 1;
		}
		else
		{
			odd = odd + 1;
		}
	}
	
	printf("Total count of even numbers is %d and total odd numbers is %d", even, odd);
	
	return 0;
}
