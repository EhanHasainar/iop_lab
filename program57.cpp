#include<stdio.h>

int main()
{
    int n, i;
    int num, max1, max2;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two numbers.\n");
        return 0;
    }
    
    printf("Enter number 1: ");
    scanf("%d", &num);
    max1 = num;

    printf("Enter number 2: ");
    scanf("%d", &num);
    
    if(num>max1)
    {
    	max2=max1;
    	max1=num;
	}
	else{
		max2 = num;
	}
	
    for (i = 3; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        if (num > max1) {
            max2 = max1;
            max1 = num;
        } else if (num > max2 && num < max1) {
            max2 = num;
        }
    }

    printf("\nLargest number = %d", max1);
    printf("\nSecond largest number = %d\n", max2);
	
	return 0;
}
