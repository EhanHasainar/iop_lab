#include<stdio.h>

int main()
{
    int n, og, x, flac = 0;
    printf("enter a 5 digit number :");
    scanf("%d", &n);
    og = n;
    while(n > 0)
    {
        x = n % 10;
        flac = flac * 10 + x;
        n = n / 10;
    }
    if(flac == og)
    {
        printf("the given number is palindrome");
    }
    else
    {
        printf("the given number is not palindrome");
    }
    return 0;
}