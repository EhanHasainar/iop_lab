#include<stdio.h>

int main()
{
	int arr[10], i, pos = 0, neg = 0, zero = 0;
	
	for(i=0; i<10; i++)
	{
		printf("Enter a number: ");
		scanf("%d", &arr[i]);
	}
	
	for(i=0; i<10; i++)
	{
		if(arr[i]>0)
		{
			pos = pos + 1;
		}
		if(arr[i]<0)
		{
			neg = neg + 1;
		}
		if(arr[i]==0)
		{
			zero = zero + 1;
		}
	}
	
	printf("Positive count is %d, Negative is %d and Zeros are %d", pos, neg, zero);
	
	return 0;
}
