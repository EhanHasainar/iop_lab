#include<stdio.h>

int main()
{
    int i = 1, x, n, temp, flac = 0;
    printf("enter the 3 digit number :");
    scanf("%d", &n);
    temp = n; // Store original number

    while(i <= 3)
    {
        x = temp % 10;
        flac = flac + x * x * x;
        temp = temp / 10;
        i = i + 1;
    }
    if(flac == n)
    {
        printf("the number is armstrong");
    }
    else
    {
        printf("the number is not armstrong");
    }
    return 0;
}