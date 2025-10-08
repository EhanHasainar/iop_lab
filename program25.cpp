#include<stdio.h>

int main()
{
  int n, x, value;

  printf("Table for the no: ");
  scanf("%d", &n);

  for(x=1; x<=10; x++)
  {
    value = n*x;
    printf("%d\n", value);
  }
  return 0;
}