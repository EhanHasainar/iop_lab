#include<stdio.h>

int main()
{
	int arr1[10], arr2[10], sum[10], i, j, temp;
	
	for(i=0; i<10; i++)
	{
		for(j=1; j<=2; j++)
		{
			printf("Enter value for array %d: ", j);
			if(j==1)
				scanf("%d", &arr1[i]);
			if(j==2)
				scanf("%d", &arr2[i]);
		}
	}
	
	for(i=0; i<10; i++)
	{
		temp = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = temp;

	}
	printf("\n");
	for(i=0; i<10; i++)
	{
		printf("%d ", arr1[i]);
	}
	
	printf("\n");
	
	for(i=0; i<10; i++)
	{
		printf("%d ", arr2[i]);
	}
	
	
	return 0;
}
