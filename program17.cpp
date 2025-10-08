#include<stdio.h>

int main()
{
  int max, a, b, c;

  printf("Three numbers are: ");
  scanf("%d%d%d", &a, &b, &c);

  if (a>b && a>c)
  {
    printf("The greatest number is %d", a);
  }
  else if (b>a && b>c)
  {
    printf("The greatest number is %d", b);
  }
  else if (c>a && c>b)
  {
    printf("The greatest number is %d", c);
  }

  else{
    printf("All the numbers are equally the same in value");
  }
  
  return 0;

}