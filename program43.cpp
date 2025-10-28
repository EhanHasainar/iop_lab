#include<stdio.h>

int main()
{
	int sale, com;
	
	printf("Enter the sale amount: ");
	scanf("%d", &sale);
	
	if(sale<=500)
	{
		com = 0.05*sale;
	}
	
	if(sale>500 && sale<=2000)
	{
		com = 35 + 0.1*(sale-500);
	}
	
	if(sale>2000 && sale<=5000)
	{
		com = 185 + 0.12*(sale-2000);
	}
	
	if(sale>5000)
	{
		com = 0.125*sale;
	}
	
	printf("Total commission = %d", com);
	
	return 0;
}
