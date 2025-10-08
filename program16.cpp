#include<stdio.h>

int main()
{
  int max, a, b, c;
  printf("Three numbers: ");
  scanf("%d%d%d", &a, &b ,&c);

  max = a;

  if (max < b)
  {
    max = b;
  }

  if (max < c)
  {
    max = c;
  }

  printf("Maximum value of the three numbers: %d", max);

  return 0;

}