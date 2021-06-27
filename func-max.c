#include "stdio.h"

int max(int a, int b); // 声明：函数类型声明？ 那不是重复写一遍吗？
int main()
{

  max(1, 2021);
}

int max(int a, int b)
{
  printf("%d= %d=", a, b);
}