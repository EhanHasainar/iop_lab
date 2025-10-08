#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter a number: ");
  scanf("%d", &a);
  printf("ENter another number: ");
  scanf("%d", &b);
  printf("The numbers before swapping were %d and %d", a,b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf("\nTHe numbers after swapping without third variable are %d and %d", a,b);
  return 0;
}