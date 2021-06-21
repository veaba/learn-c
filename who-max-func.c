// 函数

#include "stdio.h"

int max(int num1, int num2);

int main()
{

  int a = 100;
  int b = 200;

  int ret;

  ret = max(a, b);

  printf("max value is => %d\n", ret);
}

int max(int num1, int num2)
{
  // local var
  int result;

  if (num1 > num2)
  {
    return num1;
  }

  return num2;
  // result = num2;
  // return result;
}