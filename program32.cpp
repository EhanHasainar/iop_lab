/*Incomplete Code*/
#include<stdio.h>

int main()
{
    int n, max, max2;
    printf("enter a number n :");
    scanf("%d", &n);

    if(n < 2) {
        printf("please enter at least 2 numbers.\n");
        return 0;
    }

    max = n;
    max2 = n - 1;

    printf("max of the n number is %d\n", max);
    printf("2nd max of n number is %d\n", max2);
    return 0;
}