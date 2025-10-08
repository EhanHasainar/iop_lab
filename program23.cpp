#include <stdio.h>

int main()
{
    int base, exp, result = 1;
    printf("Enter the base no: ");
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exp);
    for(int i = 1; i <= exp; i++)
    {
        result = result * base;
    }
    printf("Result: %d", result);
    return 0;
}