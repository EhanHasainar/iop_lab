#include <stdio.h>

int main()
{
    int n, x, flac = 0;
    printf("enter the number :");
    scanf("%d", &n);
    while(n > 0)
    {
        x = n % 10;
        flac = flac * 10 + x;
        n = n / 10;
    }
    printf("the reverse of the number is %d\n", flac);
    
    return 0;
}