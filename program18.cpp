#include<stdio.h>

int main()
{
  int max, a, b, c;

  printf("Three numbers are: ");
  scanf("%d%d%d", &a, &b, &c);

  max = a;

  max = b>max ? b: max;

  max = c>max ? c: max;

  printf("The greatest number is %d", max);

  return 0;
}