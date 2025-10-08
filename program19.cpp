#include<stdio.h>
#include <ctype.h>

int main()
{
  char x, charac;

  printf("Character from the list of alphabets: ");
  scanf("%c", &charac);

  x = islower(charac)!=0 ? 1: 0;

  if(x==1)
  {
    printf("The character is lowercase");
  }

  else
  {
    printf("The character is not lowercase");
  }
  return 0;
}