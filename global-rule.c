// 变量规则
#include <stdio.h>

int g;

int main()
{
  // local var
  int a, b;

  // actual init
  a = 10;
  b = 20;
  // g = a + b;

  printf("value of a=%d,b=%d,g=%d\n", a, b, g); // 局部变量会替换掉全局

  return 0;
}