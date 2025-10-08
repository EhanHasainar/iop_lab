#include<stdio.h>

int main()
{
  float num1, num2, result;
  char op;

  printf("First num: ");
  scanf("%f", &num1);
  printf("Second num: ");
  scanf("%f", &num2);

  printf("Whats your operation: +, -, *, /: ");
  scanf(" %c", &op);

  switch(op)
  {
    case '+':
      result = num1+num2;
      printf("Result: %f", result);
      break;
    case '-':
      result=num1-num2;
      printf("Result: %f", result);
      break;
    case '*':
      result=num1*num2;
      printf("Result: %f", result);
      break;
    case '/':
      if(num2 !=0)
        result = num1/num2;
      else {
        printf("You can't divide by 0");
        return 1;
      }
      printf("Result: %f", result);
      break;
  }

  return 0;
}