// 作用域规则

#include "stdio.h"

int main()
{

  // scope var
  int a, b;
  int c;

  // actual init
  a = 10;
  b = 20;
  c = a + b;

  printf("value of a=%d,b=%d,c=%d\n", a, b, c);

  return 0;
}