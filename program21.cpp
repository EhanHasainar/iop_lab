#include<stdio.h>

int main()
{
    int a,b;
    char op;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Select operation (A-add, S-sub, M-mul, D-div): ");
    scanf(" %c",&op);
    switch(op)
    {
        case 'A':
            printf("%d", a+b);
            break;
        case 'S':
            printf("%d", a-b);
            break;
        case 'M':
            printf("%d", a*b);
            break;
        case 'D':
            if(b==0)
                printf("Cannot divide by zero");
            else
                printf("%d", a/b);
            break;
    }
    return 0;
}