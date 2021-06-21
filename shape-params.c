// 形式参数
// 函数的参数，形式参数，被当作该函数内的局部变量，如果与全局变量同名它们会优先使用
#include <stdio.h>

// global declaration

int a = 20;

int main()
{

  // local var

  int a = 10;
  int b = 20;
  int c = 0;

  int sum(int, int);

  printf("value of a in main = %d\n", a);

  c = sum(a, b);

  printf("value of c in main =%d\n", c);
}

int sum(int a, int b)
{

  printf("a in sum()=>%d\n", a);
  printf("b in sum()=>%d\n", b);

  return a + b;
}