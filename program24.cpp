#include<stdio.h>

int main()
{
    int y, x, n;
    printf("enter the value of x :");
    scanf("%d", &x);
    printf("enter the value of n :");
    scanf("%d", &n);
    switch(n)
    {
        case 1:
            y = 1 + x;
            break;
        case 2:
            y = 1 + x / n;
            break;
        case 3:
            y = 1 + x * x * x;
            break;
        default:
            y = 1 + n * x;
            break;
    }
    printf("the value of Y is %d\n", y);
    return 0;
}