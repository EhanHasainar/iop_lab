#include<stdio.h>

int main()
{
    int a, x, sum = 0;
    printf("enter a number: ");
    scanf("%d", &a);

    while(a > 0)
    {
        x = a % 10;
        sum = sum + x;
        a = a / 10;
    }
    printf("the sum of digits is %d\n", sum);
    return 0;
}