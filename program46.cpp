#include<stdio.h>
#include <stdbool.h>

int main()
{
	float headsize[] = {20.5, 21.0, 21.5, 22.0, 22.5, 23.0, 23.5, 24.0, 24.5, 25.0};
    float hatsize[]  = {6.5, 6.625, 6.75, 6.875, 7.0, 7.125, 7.25, 7.375, 7.5, 7.625};
    
    float circ;
    
    int i=0;
    
    bool found=false;
    
    printf("Enter circumference of head in inch: ");
    scanf("%f", &circ);
    
    for(i; i<10; i++)
    {
    	if(circ==headsize[i])
    	{
    		printf("Your hat size is %.3f\n", hatsize[i]);
    		found = true;
    		break;
		}
	}
	
	if (found==false)
	{
		printf("Hat for your size doesn't exist");
	}
	
	return 0;
}
