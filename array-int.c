#include "stdio.h"

int main()
{

  int n[10]; // 好像每次执行都差不多的结果，就一个两个元素的值有变化
  int i;
  for (i = 0; i < 10; i++)
  {
    printf("%d=>\n", n[i]);
  }

  printf("%d", n);
}
