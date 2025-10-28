#include<stdio.h>

int main()
{
	int cons, amt;
	
	printf("Enter the consumption unit: ");
	scanf("%d", &cons);
	
	if(cons>0 && cons<=200)
	{
		amt = 0.5*cons;
	}
	
	if(cons>200 && cons<=400)
	{
		amt = 100 + 0.65*(cons-200);
	}
	
	if(cons>400 && cons<=600)
	{
		amt = 230 + 0.8*(cons-400);
	}
	
	if(cons>600)
	{
		amt = 425 + 125*(cons-600);	
	}
	
	printf("The amount to be paid by the consumer = %d", amt);
	
	return 0;
}
