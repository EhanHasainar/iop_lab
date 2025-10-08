#include<stdio.h>
int main()
{
    int i=1, sum=0, n, s=0, j=1;
    printf("enter the number :");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("sum of even no. between 1 to %d is %d\n", n, sum);

    for(j = 1; j <= n; j++)
    {
        if(j % 2 == 1)
        {
            s = s + j;
        }
    }
    printf("sum of odd no. between 1 to %d is %d\n", n, s);

    return 0;
}