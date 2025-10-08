#include <stdio.h>

int main()
{
    float simpleinterest;
    float p, r, t;
    printf("Principle Amount: ");
    scanf("%f", &p);
    printf("Interest Rate: ");
    scanf("%f", &r);
    printf("Time in years ");
    scanf("%f", &t);
    simpleinterest = (p * r * t) / 100;
    printf("Your interest is: %f", simpleinterest);
    return 0;
}
