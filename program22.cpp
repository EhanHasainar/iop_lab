#include <stdio.h>

int main()
{
    int num, fact = 1, j = 1;
    printf("Enter a number to find its factorial: ");
    scanf("%d", &num);
    while(j <= num)
    {
        fact = fact * j;
        j++;
    }
    printf("Factorial is: %d", fact);
    return 0;
}